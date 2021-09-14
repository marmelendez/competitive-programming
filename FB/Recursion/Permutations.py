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
    if (len(s) == permutation_length):
        return s
    for i in alphabet:
        s+= i
        return aux(s, alphabet, permutation_length)


def string_permutations(alphabet, permutation_length):
    print(aux("", alphabet, permutation_length))

if __name__ == '__main__':
    alphabet_input = input().rstrip().split()

    permutation_length_input = int(input().strip())

    string_permutations(alphabet_input, permutation_length_input)

