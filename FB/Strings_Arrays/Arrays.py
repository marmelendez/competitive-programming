# HACKER RANK PROBLEM: Arrays - DS
# Reverse an array of integers.

import math
import os
import random
import re
import sys

def reverseArray(a):
    output = []
    c = len(a) -1
    while(c >= 0):
        output.append(a[c])
        c -= 1
    return output

if __name__ == '__main__':
    arr_count = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    res = reverseArray(arr)

    print(' '.join(map(str, res)))
