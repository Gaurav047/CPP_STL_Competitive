// Advantage of linked list over arrays:
// 1) Dynamic Size
// 2) Ease of insertion/Deletion

//Drawbacks:
// Random access is not allowed
// So we cannot do efficient binary search with linked lists .
// Extra memory space for a pointer is required with each element of the list.
// Not Cache Friendly.

//Representation:
//A linked list is represented by a pointer to the head Node of the linked list.

//Each Node consists of atleast these two parts:
// 1) data
// 2) Pointer ( OR reference ) to the next node.

// In C, we can represent a node using structures.
// In C++, nodes can be represented using a class type.

// A linked list node in C
// struct node{
//        int data;
//        struct node* next;
//};

// A linked list node in C++
// class Node{
// public:
//      int data;
//      Node* next;    
//};

//An example introductory CPP Program to introduce
//a linked list

#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

// A program to create a linked list with three nodes.

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // Allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    //Now lets assign some value to each node and connect them.
    head->data = 10;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 23;
    third->next = NULL;
    
    Node* iter = NULL; // a temporary node pointer to iterate the linked list.
    iter = new Node();
    iter = head;
    while( iter->next !=NULL ){
        int temp = iter->data;
        cout << temp << " ";
        iter = iter->next;
    } 
    return 0;
}