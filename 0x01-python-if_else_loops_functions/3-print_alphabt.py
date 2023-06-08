#!/usr/bin/python3
for n in range(97, 123):
    if chr(n) == 'q' or chr(n) == 'e':
        continue
    print(chr(n).format(n), end='')
