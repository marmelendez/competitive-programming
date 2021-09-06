#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'caesarCipher' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING s
#  2. INTEGER k
#

def caesarCipher(s, k):
    output = ""
    for i in s:
        if (i.isalpha()): 
            chIndex = ord(i) 
            if (chIndex in range (65,91)):
                chIndex += (k % 26)
                if (chIndex > 90):
                    chIndex -= 26

            elif (chIndex in range (97,123)):
                chIndex += (k % 26)
                if (chIndex > 122):
                    chIndex -= 26
            output += chr(chIndex)
        else:
            output += i
    return output



if __name__ == '__main__':

    n = int(input().strip())

    s = input()

    k = int(input().strip())

    result = caesarCipher(s, k)

    print(result)

######################
##### Test cases #####
######################

##### Case 1 #########
### Input
# x
# There’s-a-starman-waiting-in-the-sky
# 3

### Output
# Wkhuh’v-d-vwdupdq-zdlwlqj-lq-wkh-vnb

##### Case 2 #########
#### Input
# x
# abcdefghijklmnopqrstuvwxyz
# 3

### Output
# defghijklmnopqrstuvwxyzabc

##### Case 3 #########
#### Input
# 11
# middle-Outz
# 2

### Output
# okffng-Qwvb
