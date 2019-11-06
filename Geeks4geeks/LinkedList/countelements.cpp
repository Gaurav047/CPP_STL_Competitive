// Counting number of nodes in a linked list iteratively.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;


//Linked list Node class
class Node {
    public:
        int data;
        Node *next;
};

// Given a reference ( pointer to pointer ) to the head of a list
// and a list and a int, push a new node on the front of a the list. 
 
void push( Node **head_ref, int new_data ){
    //allocate node
    Node *new_node = new Node();

    // Put in data into new node
    new_node->data = new_data;

    //add the new node to the head_ref
    new_node->next = (*head_ref);

    //move the head to the new node added at the front
    (*head_ref) = new_node;

}

int getCount(Node *head){
    int count = 0;
    Node *current = head;
    while ( current != NULL ){
        count++;
        current = current->next;
    }
    return count;

}

//Driver Program
int main(){
    Node *head = NULL;

    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    cout << "Count of the node is: "<< getCount(head);
    return 0;
}