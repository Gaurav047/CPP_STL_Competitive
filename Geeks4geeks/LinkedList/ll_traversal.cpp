/**
Traverse the Createdlist and print the data at each node.
**/

#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

// A function to print contents of a linked list
// starting from a given node.

void printList(Node* n){
    while (n != NULL ){
        cout << n->data << " ";
        n = n->next;
    }
}

//Driver Code
int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    //allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1; //assign data in first node
    head->next = second; //Link head to second

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);
    return 0;
}