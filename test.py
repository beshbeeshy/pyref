import sys
import pyref

pyref.store("Whatever")
print(sys.getrefcount(pyref.load()))

