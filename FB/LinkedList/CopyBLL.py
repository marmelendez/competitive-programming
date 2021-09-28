#!/bin/python3

import math
import os
import random
import re
import sys

class DoublyLinkedListNode:
    def __init__(self, node_data):
        self.data = node_data
        self.next = None
        self.prev = None

class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def insert_node(self, node_data):
        node = DoublyLinkedListNode(node_data)

        if not self.head:
            self.head = node
        else:
            self.tail.next = node
            node.prev = self.tail

        self.tail = node

def print_doubly_linked_list(node, sep, fptr):
    while node:
        fptr.write(str(node.data))

        node = node.next

        if node:
            fptr.write(sep)

#
# Complete the 'copy_dll' function below.
#
# The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
# The function accepts INTEGER_DOUBLY_LINKED_LIST dll as parameter.
#

#
# For your reference:
#
# DoublyLinkedListNode:
#     int data
#     DoublyLinkedListNode next
#     DoublyLinkedListNode prev
#
#
def copy(dll, prev, next_node, head):
    if (dll == None):
        return head
    node = DoublyLinkedListNode(dll.data)
    node.prev = prev
    node.prev.next 
    node.next.data = next_node.data

    if (prev == None):
        head = node
    copy(dll.next, node, dll.next, head)
    


def copy_dll(dll):
    node = DoublyLinkedListNode(dll.data)
    node.prev = None
    node.next = None
    next_node = DoublyLinkedListNode(dll.next.data)
    copy(dll, None, next_node, node)
    

    #crear nuevo node con data vacia
    # si dll.before es nulo
    #al nuevo nodo ponerle nulo
    # si no lo es crear nuevo nodo para ese nodo 
    # hacer lo mismo con el next
    #asignar nodos nuevos 

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    input_dll_count = int(input().strip())

    input_dll = DoublyLinkedList()

    for _ in range(input_dll_count):
        input_dll_item = int(input().strip())
        input_dll.insert_node(input_dll_item)

    copied_dll = copy_dll(input_dll.head)

    print_doubly_linked_list(copied_dll, ',', fptr)
    fptr.write('\n')

    fptr.close()
