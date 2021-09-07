import math
import os
import random
import re
import sys

def find_unique(haystack):
    c = 0
    for i in haystack:
        c = 0
        for j in haystack:
            if (i == j):
                c += 1
        if (c == 1):
            return i

if __name__ == '__main__':

    input_haystack = list(map(int, input().rstrip().split()))

    unique_number = find_unique(input_haystack)

    print(unique_number)


