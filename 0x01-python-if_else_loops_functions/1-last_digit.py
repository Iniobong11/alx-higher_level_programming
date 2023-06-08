#!/usr/bin/python3
import random
numb = random.randint(-10000, 10000)
digit = abs(numb) % 10
if numb < 0:
    digit = -digit
print("Last digit of {} is {} and is ".format(numb, digit), end="")
if digit > 5:
    print("greater than 5")
elif digit == 0:
    print("0")
else:
    print("less than 6 and not 0")
