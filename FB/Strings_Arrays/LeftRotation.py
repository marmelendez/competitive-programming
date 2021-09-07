import math
import os
import random
import re
import sys

def rotateLeft(d, arr):
    size = len(arr)
    resp = [None] * size
    d = d % size
    for i in range (size):
        index = i - d
        if (index < 0):
            index += size
        resp[index] = arr[i]
    return resp
        
if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    d = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    result = rotateLeft(d, arr)

    print(result)