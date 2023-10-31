#!/usr/bin/python3
for v in range(0, 100):
    if v == 99:
        print("{}".format(v))
    else:
        print("{:02}".format(v), end=", ")
