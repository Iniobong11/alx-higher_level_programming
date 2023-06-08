#!/usr/bin/python3
if __name__ == "__main__":
    from calculator_1 import add, sub, mul, div
    m = 10
    n = 5
    print("{:d} + {:d} = {:d}".format(m, n, add(m, n)))
    print("{:d} - {:d} = {:d}".format(m, n, sub(m, n)))
    print("{:d} * {:d} = {:d}".format(m, n, mul(m, n)))
    print("{:d} / {:d} = {:d}".format(m, n, div(m, n)))
