#!/usr/bin/python3
import random
numb = random.randint(-10000, 10000)
last = abs(numb) % 10
if numb > 5:
    print(f'Last digit of {numb} is {last} and is greater than 5')
elif numb == 0:
    print(f'Last digit of {numb} is {last} and is 0')
else:
    print(f'Last digit of {numb} is -{last} and is less than 6 and not 0')
