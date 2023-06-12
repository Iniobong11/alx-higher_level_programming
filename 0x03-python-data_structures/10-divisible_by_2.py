#!/usr/bin/python3

def divisible_by_2(my_list=[]):
    new_l = my_list.copy()
    for n in range(0, len(my_list)):
        if my_list[n] % 2 == 0:
            new_l[n] = 1
        else:
            new_l[n] = 0
    return new_l
