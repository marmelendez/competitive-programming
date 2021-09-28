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

def print_singly_linked_list(node, sep):
    while node:
        print(node.data, end='')

        node = node.next

        if node:
            print(sep, end='')

#
# Complete the 'print_linked_list' function below.
#
# The function accepts INTEGER_SINGLY_LINKED_LIST head as parameter.
# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
def print_linked_list(head):
    if (head == None):
        return
    print(head.data)
    print_linked_list(head.next)

if __name__ == '__main__':
    list1_count = int(input().strip())

    list1 = SinglyLinkedList()

    for _ in range(list1_count):
        list1_item = int(input().strip())
        list1.insert_node(list1_item)

    print_linked_list(list1.head)
