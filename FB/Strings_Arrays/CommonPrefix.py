import math
import os
import random
import re
import sys

def longest_common_prefix(strings):
    if (len(strings) == 0):
        return ""
    start = strings[0]
    prefix = strings[0]
    for i in strings:
        newPrefix = ""
        for j in range (len(i)):
            if (j < len(start) and j < len(i)):
                if (start[j] == i[j]):
                    newPrefix += start[j]
                else:
                    break
        if (len(newPrefix) < len(prefix)):
            prefix = newPrefix
    return prefix



if __name__ == '__main__':
    strings_in_count = int(input().strip())

    strings_in = input().rstrip().split()

    ret = longest_common_prefix(strings_in)

    print(ret)