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

def print_singly_linked_list(node):
    while node:
        print(node.data)
        print()

        node = node.next


#
# Complete the 'insert_at_position' function below.
#
# The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
# The function accepts following parameters:
#  1. INTEGER_SINGLY_LINKED_LIST head
#  2. INTEGER val
#  3. INTEGER pos
#

#
# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
#

def insert_at_position(head, val, pos):
    current_node = SinglyLinkedListNode(0) #sentinel node
    current_node.next = head
    new_node = SinglyLinkedListNode(val)
    i = -1
    while (current_node != None):
        if (i + 1 == pos):
            next_node = current_node.next
            current_node.next = new_node
            new_node.next = next_node
            if (i + 1 == 0):
                return current_node
            return head
        i += 1
        current_node = current_node.next


if __name__ == '__main__':

    input_sll_count = int(input().strip())

    input_sll = SinglyLinkedList()

    for _ in range(input_sll_count):
        input_sll_item = int(input().strip())
        input_sll.insert_node(input_sll_item)

    input_value_for_insertion = int(input().strip())

    input_position_for_insertion = int(input().strip())

    inserted_head = insert_at_position(input_sll.head, input_value_for_insertion, input_position_for_insertion)

    print_singly_linked_list(inserted_head)
