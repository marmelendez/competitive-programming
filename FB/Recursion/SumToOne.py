import math
import os
import random
import re
import sys


def sum_to_one(digits):
    if (len(digits) == 1):
        return digits
    count = 0;
    for i in digits:
        count += int(i)
    return sum_to_one(str(count))


if __name__ == '__main__':
    input_string = input()

    single_digit_sum = sum_to_one(input_string)

    print(single_digit_sum)

