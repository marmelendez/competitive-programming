import math
import os
import random
import re
import sys

#
# Complete the 'string_permutations' function below.
#
# The function accepts following parameters:
#  1. STRING_ARRAY alphabet
#  2. INTEGER permutation_length
#

def aux(s, alphabet, permutation_length):
    if (permutation_length == 0):
        print(s)
        return 
    for i in alphabet:
        s_new = s + i
        aux(s_new, alphabet, permutation_length - 1)


def string_permutations(alphabet, permutation_length):
    aux("", alphabet, permutation_length)

if __name__ == '__main__':
    alphabet_input = input().rstrip().split()

    permutation_length_input = int(input().strip())

    string_permutations(alphabet_input, permutation_length_input)

