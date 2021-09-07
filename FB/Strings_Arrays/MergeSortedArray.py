import math
import os
import random
import re
import sys

def merge_arrays(arr1, arr2):
    size = len(arr1) + len(arr2)
    arr = []
    indexArr1 = 0
    indexArr2 = 0
    for i in range (size):
        if (indexArr1 < len(arr1) and indexArr2 < len(arr2)):
            if (arr1[indexArr1] < arr2[indexArr2]):
                arr.append(arr1[indexArr1])
                indexArr1+=1
            else:
                arr.append(arr2[indexArr2])
                indexArr2+=1
        elif (indexArr1 < len(arr1)):
            arr.append(arr1[indexArr1])
            indexArr1+=1
        elif (indexArr2 < len(arr2)):
            arr.append(arr2[indexArr2])
            indexArr2+=1
    return arr

if __name__ == '__main__':

    arr1_in_count = int(input().strip())

    arr1_in = list(map(int, input().rstrip().split()))

    arr2_in_count = int(input().strip())

    arr2_in = list(map(int, input().rstrip().split()))

    ret = merge_arrays(arr1_in, arr2_in)

    print(ret)