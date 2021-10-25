#include <iostream>

using namespace std;

class Node {
    public:
        int value;
        Node* next;

    Node(int value) {
        this->value = value;
        this->next = nullptr;
    }
};

class LinkedList {
    public:

    Node* root;
    Node* tail;
    int size;

    bool isEmpty() {
        return this->size == 0;
    }

    void insert(Node* node) {
        if (isEmpty()) {
            this->root = node;
            this->tail = node;
        } else {
            this->tail->next = node;
            this->tail = node;
        }
        this->size++;
    }

    bool isCycle() {
        Node* currentOne = this->root;
        Node* currentTwo = this->root->next;

        while (currentTwo != nullptr && currentOne != nullptr) {
            if (currentTwo == currentOne) {
                return true;
            }
            currentOne = currentOne->next;
            currentTwo = currentTwo->next->next;
            
        };

        return false;
    }
};

int main(){
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    LinkedList myLinkedList = LinkedList();
    myLinkedList.insert(node1);
    myLinkedList.insert(node2);
    myLinkedList.insert(node3);
    myLinkedList.insert(node4);
    myLinkedList.insert(node2);

    cout << myLinkedList.isCycle() << endl;
}