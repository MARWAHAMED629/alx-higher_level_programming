#!/usr/bin/python3
for n in range(10):
    for x  in range(n, 10):
        if n < x:
            print("{:d}{:d}".format(n, x),
                 end="\n" if n == 8 and x ==9 else  ", ")
