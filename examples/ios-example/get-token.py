#!/usr/bin/env python3
"""
Generate a service account access token for Firestore.
Usage: python3 get-token.py <path-to-service-account-key.json>
Example: python3 get-token.py /path/to/your-service-account-key.json
"""

import sys
import json
import time
import urllib.request
import urllib.parse
import os

def get_access_token(service_account_key_path):
    """Get an access token using the service account key."""
    with open(service_account_key_path, 'r') as f:
        key_data = json.load(f)
    
    # Try using PyJWT (jwt library)
    try:
        import jwt
        
        now = int(time.time())
        claim_set = {
            "iss": key_data["client_email"],
            "scope": "https://www.googleapis.com/auth/cloud-platform",
            "aud": "https://oauth2.googleapis.com/token",
            "exp": now + 3600,  # Token expires in 1 hour
            "iat": now
        }
        
        # Create JWT
        assertion = jwt.encode(claim_set, key_data["private_key"], algorithm="RS256")
        
        # Exchange JWT for access token
        token_url = "https://oauth2.googleapis.com/token"
        data = urllib.parse.urlencode({
            "grant_type": "urn:ietf:params:oauth:grant-type:jwt-bearer",
            "assertion": assertion
        }).encode('utf-8')
        
        req = urllib.request.Request(token_url, data=data)
        req.add_header('Content-Type', 'application/x-www-form-urlencoded')
        
        # Create SSL context that doesn't verify certificates (for development)
        import ssl
        ssl_context = ssl.create_default_context()
        ssl_context.check_hostname = False
        ssl_context.verify_mode = ssl.CERT_NONE
        
        with urllib.request.urlopen(req, context=ssl_context) as response:
            result = json.loads(response.read().decode('utf-8'))
            token = result['access_token']
            print(f"Token generated successfully:")
            print(token)
            return token
            
    except ImportError:
        print("⚠️  PyJWT library not found.")
        print("Install it with: pip install PyJWT")
        print("\nAlternatively, install gcloud CLI and run:")
        print(f'   gcloud auth activate-service-account --key-file="{service_account_key_path}"')
        print(f'   gcloud auth print-access-token')
        sys.exit(1)
    except Exception as e:
        print(f"❌ Error generating token: {e}")
        sys.exit(1)

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("❌ Error: Service account key file path is required")
        print("\nUsage: python3 get-token.py <path-to-service-account-key.json>")
        print("\nExample:")
        print("  python3 get-token.py /path/to/your-service-account-key.json")
        print("\nTo get a service account key:")
        print("  1. Go to Firebase Console > Project Settings > Service Accounts")
        print("  2. Click 'Generate New Private Key'")
        print("  3. Save the JSON file and use its path with this script")
        sys.exit(1)
    
    key_file = sys.argv[1]
    
    if not os.path.exists(key_file):
        print(f"❌ Error: File not found: {key_file}")
        sys.exit(1)
    
    try:
        token = get_access_token(key_file)
        print(f"\n✅ Token expires in 1 hour")
        print(f"\nCopy this token to FirestoreConfig.swift")
    except Exception as e:
        print(f"❌ Error generating token: {e}")
        sys.exit(1)
