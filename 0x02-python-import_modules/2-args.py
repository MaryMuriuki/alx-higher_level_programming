#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    dig = len(sys.argv)
    if dig == 1:
        print("{} arguments.".format(dig - 1))
    elif dig == 2:
        print("{} arguments.".format(dig - 1))
    else:
        print("{} arguments:".format(dig - 1))

    for i in range(1, dig):
        print("{}: {}".format(i, sys.argv[i]))
