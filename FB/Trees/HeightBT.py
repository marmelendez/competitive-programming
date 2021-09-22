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
# Complete the 'bst_height' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_BINARY_SEARCH_TREE bst as parameter.
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

def bst_height(bst):
    if (bst == None):
        return 0
    height_ls = bst_height(bst.left)
    height_rs = bst_height(bst.right)
    if (height_rs > height_ls):
        return 1 + height_rs 
    return 1 + height_ls 
    

if __name__ == '__main__':
    input_bst_count = int(input().strip())

    input_bst = None

    for _ in range(input_bst_count):
        input_bst_item = int(input().strip())
        input_bst = insert_node_into_binary_search_tree(input_bst, input_bst_item)

    height = bst_height(input_bst)

    print(height)
