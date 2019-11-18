import sys
for number, line in enumerate(sys.stdin.readlines()):
    print("%2d: %s" % (number, line[:-1]))
