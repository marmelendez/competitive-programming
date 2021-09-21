#!/bin/python3

import math
import os
import random
import re
import sys
import queue

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

def print_binary_search_tree_inorder_traversal(node, sep):
    if node == None:
        return

    print_binary_search_tree_inorder_traversal(node.left, sep)

    if node.left:
        print(sep, end='')
    print(node.data, end='')

    if node.right:
        print(sep, end='')

    print_binary_search_tree_inorder_traversal(node.right, sep)

#
# Complete the 'level_order_print' function below.
#
# The function accepts INTEGER_BINARY_SEARCH_TREE root as parameter.
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

def level_order_print(root):
    q = []
    q.append(root)
    while (len(q) > 0):
        front = q.pop(0)
        print(front.data, end = " ")
        if (front.left != None):
            q.append(front.left)
        if (front.right != None):
            q.append(front.right)
    print()
        
if __name__ == '__main__':
    input_bst_count = int(input().strip())

    input_bst = None

    for _ in range(input_bst_count):
        input_bst_item = int(input().strip())
        input_bst = insert_node_into_binary_search_tree(input_bst, input_bst_item)

    level_order_print(input_bst)
