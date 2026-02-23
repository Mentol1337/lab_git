import requests

r = requests.get("https://api.github.com")
print("Status:", r.status_code)
print("Content-Type:", r.headers.get("content-type"))
print("JSON keys:", list(r.json().keys()))
