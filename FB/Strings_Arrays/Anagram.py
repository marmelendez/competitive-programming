import math
import os
import random
import re
import sys

def are_anagrams(s1, s2):
    if (len(s1) == len(s2)):
        for i in s1:
            if (i not in s2):
                return 0
        return 1
    return 0

if __name__ == '__main__':
    s1_in = input()

    s2_in = input()

    val = are_anagrams(s1_in, s2_in)

    print(str(val) + '\n')
