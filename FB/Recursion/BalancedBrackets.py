import math
import os
import random
import re
import sys

#
# Complete the 'isBalanced' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def is_balanced(s):
    if (len(s) == 2):
        if ((s[0] == '{' and s[-1] == '}') or 
        (s[0] == '(' and s[-1] == ')') or 
        (s[0] == '(' and s[-1] == ')')):
            return "YES"
        else:
            return "NO"
    return is_balanced(s[1:-1])

if __name__ == '__main__':
    #s = "asdhaskj"
    #print(s[1:])

    t = int(input().strip())

    for t_itr in range(t):
        s = input()

        result = is_balanced(s)

        print(result)
