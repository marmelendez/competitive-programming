import math
import os
import random
import re
import sys

#
# Complete the 'compute_sum' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING x
#  2. STRING y
#


def sum_num(x,y,res,add):
    if (x == "" and y == ""):
        return str(add) + res if (add == 1) else res
    if (len(x) > 0 and len(y)>0):
        sum_two = int(x[-1]) + int(y[-1]) + int(add)
    elif(len(x) > 0):
        sum_two = int(x[-1]) + add
    elif(len(y) > 0):
        sum_two = int(y[-1]) + add
    
    add = 1 if (sum_two > 9) else 0

    res = str(sum_two)[-1] + res

    return sum_num(x[:-1],y[:-1],res,add)

def compute_sum(x, y):
    if (len(x) > 0 and len(y) > 0):
        return sum_num(x,y,"", 0)
    elif (len(x) > 0):
        return x
    return y
    
if __name__ == '__main__':
    input_x = input()
    input_y = input()
    solution = compute_sum(input_x, input_y)
    print(solution)
