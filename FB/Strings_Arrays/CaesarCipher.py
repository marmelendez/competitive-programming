# HACKER RANK PROBLEM: Caesar Cipher
# Julius Caesar protected his confidential information by encrypting it using a cipher. 
# Caesar's cipher shifts each letter by a number of letters. 
# If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet. 
# In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.

import math
import os
import random
import re
import sys

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


##### Test cases #####

##### Case 1 #####
### Input
# x
# There’s-a-starman-waiting-in-the-sky
# 3

### Output
# Wkhuh’v-d-vwdupdq-zdlwlqj-lq-wkh-vnb

##### Case 2 #####
#### Input
# x
# abcdefghijklmnopqrstuvwxyz
# 3

### Output
# defghijklmnopqrstuvwxyzabc

##### Case 3 #####
#### Input
# 11
# middle-Outz
# 2

### Output
# okffng-Qwvb