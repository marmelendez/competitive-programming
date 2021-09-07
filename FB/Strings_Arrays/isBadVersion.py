import math
import os
import random
import re
import sys

def isBadVersion(versions, version):
    return versions.index(version)

if __name__ == '__main__':

    input_versions_array = list(map(int, input().rstrip().split()))

    input_version = int(input().strip())

    bad = isBadVersion(input_versions_array, input_version)

    print(bad)
