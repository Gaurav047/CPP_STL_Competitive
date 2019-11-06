/**
A linked list is represented by a pointer to the first node of the linked list.
The first Node is called the Head.
If the linked list is empty, then the value of the head is NULL.
Each node in a list consists of at least 2 parts:
1) data
2) Pointer ( or reference ) to the next node
In C, we can represent a node using structures. In C++, Linked List can be represented as a class
and a node as a separate class. The Linked List class contains a reference of Node Class type.

In CPP the Node class is defined as:

class Node {
public:
    int data;
    Node* next;
};

**/

#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

//Program to create a simple linked list with 3 nodes.

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    //allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    // Three blocks have been allocated dynamically. We have
    // pointer to these three blocks as head, second and third.
    // Let's assign data and the reference pointer to these blocks
    head->data = 1; //assign data to head node
    head->next = second; //Link head node to the second node


    second->data = 2; //assigned data to second block.
    second->next = third; // Link second block to third node.
    
    third->data = 3;
    third->next = NULL; // indicates that the linked list is terminated now.

    return 0;
}