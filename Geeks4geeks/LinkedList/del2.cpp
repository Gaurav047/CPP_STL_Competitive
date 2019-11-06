// C++ Program to delete a linked list
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

void deleteList( Node **head_ref ){
    Node *current = *head_ref;
    Node *next;
    while ( current != NULL ){
        next = current->next;
        free(current);
        current = next;
    }

    // deref head_ref to affect the real head back 
    *head_ref = NULL;
}

void push( Node **head_ref, int new_data ){
    // allocate new node
    Node* new_node =  new Node();
    //put in data
    new_node->data = new_data;
    //link the old list off the new node
    new_node->next = (*head_ref);
    //move the head ton point to the new node
    (*head_ref) = new_node;
}

// Driver Code

int main(){
    Node* head = NULL;

    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);

    cout << "Deleting linked list";
    deleteList(&head);

    cout << "\nLinked list deleted";
}