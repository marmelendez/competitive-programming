#!/bin/python3

import math
import os
import random
import re
import sys

class BinaryTreeNode:
    def __init__(self, node_data):
        self.data = node_data
        self.left = None
        self.right = None

def insert_node_into_binary_tree(node, node_data):
    if node == None:
        node = BinaryTreeNode(node_data)
        return node

    nodes = []
    
    nodes.append(node)
 
    while len(nodes) > 0:
        n = nodes.pop();
        
        if n.right is not None:
            nodes.append(n.right);
        else:
            n.right = BinaryTreeNode(node_data);
            return node;

        if n.left is not None:
            nodes.append(n.left);
        else:
            n.left = BinaryTreeNode(node_data);
            return node;

#
# Complete the 'isValidBST' function below.
#
# The function is expected to return a BOOLEAN.
# The function accepts INTEGER_BINARY_SEARCH_TREE bst as parameter.
#

#
# For your reference:
#
# BinaryTreeNode:
#     int data
#     BinaryTreeNode left
#     BinaryTreeNode right
#
#

def isValidBST(bst):
    if (bst == None):
        return 1
    if ((bst.left != None and bst.left.data > bst.data) 
        or (bst.right != None and bst.right.data < bst.data)):
        return 0
    if (isValidBST(bst.right) == 0 or isValidBST(bst.left) == 0):
        return 0
    return 1

if __name__ == '__main__':

    input_bst_count = int(input().strip())

    input_bst = None

    for _ in range(input_bst_count):
        input_bst_item = int(input().strip())
        input_bst = insert_node_into_binary_tree(input_bst, input_bst_item)

    is_valid = isValidBST(input_bst)

    print(is_valid)
