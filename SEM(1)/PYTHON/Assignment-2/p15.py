import re

pattern = r"\b\d{10}\b|\b\+\d{12}\b|\b\(\d{2}\)\s?\d{10}\b"

text = "This is a text with a mobile number: +91 9876543210. Another number: (91) 9876543210. And a local one: 9876543210."

mobile_numbers = re.findall(pattern, text)

print(mobile_numbers)