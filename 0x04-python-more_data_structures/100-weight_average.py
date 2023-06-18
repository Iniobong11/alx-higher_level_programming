#!/usr/bin/python3
def weight_average(my_list=[]):
    if my_list and len(my_list):
        numb = 0
        demi = 0
        for tup in my_list:
            numb += (tup[0] * tup[1])
            demi += tup[1]
        return (numb / demi)
    return 0
