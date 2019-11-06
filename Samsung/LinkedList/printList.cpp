// A simple function to print the given Linked List

#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void printList( Node *head ){
    Node* iter = NULL;
    iter = new Node(); // Allocating space to the iter (iterator)
    iter = head;
    while ( iter != NULL ){
        int temp = iter->data;
        cout << temp << " ";
        iter  = iter->next;
    }
    return;
}


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
    
   printList(head);
    return 0;
}