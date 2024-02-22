#!/usr/bin/python3
from ctypes import CDLL

# Load the shared library
libadd = CDLL('./libadd.so')

# Call the C function from Python
result = libadd.add(3, 4)
print("Result:", result)

