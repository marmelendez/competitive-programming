#!/bin/python3

import math
import os
import random
import re
import sys

class SinglyLinkedListNode:
    def __init__(self, node_data):
        self.data = node_data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def insert_node(self, node_data):
        node = SinglyLinkedListNode(node_data)

        if not self.head:
            self.head = node
        else:
            self.tail.next = node

        self.tail = node

def print_singly_linked_list(node, sep, fptr):
    while node:
        fptr.write(str(node.data))

        node = node.next

        if node:
            fptr.write(sep)

#
# Complete the 'merge_sorted_lists' function below.
#
# The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
# The function accepts following parameters:
#  1. INTEGER_SINGLY_LINKED_LIST first
#  2. INTEGER_SINGLY_LINKED_LIST second
#

#
# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
#

def merge_sorted_lists(first, second):
    ll = SinglyLinkedList()
    node1 = first
    node2 = second

    while (node1 != None or node2 != None):
        if (node1 == None or node2.data < node1.data):
            ll.insert_node(node2.data)
            node2 = node2.next
        elif (node2 == None or node1.data < node2.data):
            ll.insert_node(node1.data)
            node1 = node1.next
        # elif(node1 < node2):
        #     ll.insert_node(node1.data)
        #     node1 = node1.next
        # elif(node2 < node1):
        #     ll.insert_node(node2.data)
        #     node2 = node2.next
        else:
            ll.insert_node(node1.data)
            ll.insert_node(node2.data)
            node1 = node1.next
            node2 = node2.next
    return ll.head

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    input_sll_count = int(input().strip())

    input_sll = SinglyLinkedList()

    for _ in range(input_sll_count):
        input_sll_item = int(input().strip())
        input_sll.insert_node(input_sll_item)

    input_sll_2_count = int(input().strip())

    input_sll_2 = SinglyLinkedList()

    for _ in range(input_sll_2_count):
        input_sll_2_item = int(input().strip())
        input_sll_2.insert_node(input_sll_2_item)

    merged_list = merge_sorted_lists(input_sll.head, input_sll_2.head)

    print_singly_linked_list(merged_list, ',', fptr)
    fptr.write('\n')

    fptr.close()
