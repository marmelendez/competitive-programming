#!/bin/python3

import math
import os
import random
import re
import sys

class BinarySearchTreeNode:
    def __init__(self, node_data):
        self.data = node_data
        self.left = None
        self.right = None

def insert_node_into_binary_search_tree(node, node_data):
    if node == None:
        node = BinarySearchTreeNode(node_data)
    else:
        if (node_data <= node.data):
            node.left = insert_node_into_binary_search_tree(node.left, node_data)
        else:
            node.right = insert_node_into_binary_search_tree(node.right, node_data)

    return node

def print_binary_search_tree_inorder_traversal(node, sep, fptr):
    if node == None:
        return

    print_binary_search_tree_inorder_traversal(node.left, sep, fptr)

    if node.left:
        fptr.write(sep)
    fptr.write(str(node.data))

    if node.right:
        fptr.write(sep)

    print_binary_search_tree_inorder_traversal(node.right, sep, fptr)

#
# Complete the 'bst_contains' function below.
#
# The function is expected to return a BOOLEAN.
# The function accepts following parameters:
#  1. INTEGER_BINARY_SEARCH_TREE root
#  2. INTEGER number
#

#
# For your reference:
#
# BinarySearchTreeNode:
#     int data
#     BinarySearchTreeNode left
#     BinarySearchTreeNode right
#
#

def bst_contains(root, number):
    if (root.data == number):
        return True
    if (root.data > number):
        return bst_contains(root.left, number)
    if (root.data < number):
        return bst_contains(root.right, number)
    return False

if __name__ == '__main__':

    input_bst_count = int(input().strip())

    input_bst = None

    for _ in range(input_bst_count):
        input_bst_item = int(input().strip())
        input_bst = insert_node_into_binary_search_tree(input_bst, input_bst_item)

    input_number = int(input().strip())

    does_contain = bst_contains(input_bst, input_number)

    print(does_contain)

