#!/usr/bin/python
import sys

print("argc="+str(len(sys.argv)))
print("argv[0]="+sys.argv[0])
if len(sys.argv)>1:
    for line in open(sys.argv[1]):
        if line.startswith("#include"):
            print(line.strip()[9:-1])
