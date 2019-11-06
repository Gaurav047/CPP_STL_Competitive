// If the node is to be added at the front,
// it can be executed in a single step.


//Given a reference (pointer to pointer) to the head of a list.
// and a int, insert a new node on the front of the list.
#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void push(Node** head_ref, int new_data){
    // Allocate Node:
    Node* new_node = new Node();

    // Put data into the new_node:
    new_node->data = new_data;

    // Make next of new_node as head_ref:
    new_node->next = (*head_ref);

    //Move the head to new_node:
    (*head_ref) = new_node;
}

/*Given a node prev_node, insert a new node after the given
 prev_node */

void insertAfter(Node* prev_node, int new_data){
    // Check if the given prev_node is NULL
    if ( prev_node == NULL ){
        cout << "the given previous node cannot be NULL"<< endl;
        return;
    }
    // Allocate new node
    Node* new_node = new Node();

    // Put the new_data inside the new_node
    new_node->data = new_data;

    // make next of the new_node as next of prev_node
    new_node->next = prev_node->next;

    // Move the next of prev_node to new_node
    prev_node->next = new_node;
}

/*Given a reference ( pointer to pointer) to the head node.
 Append a node with given int value at the end.*/
void append(Node **head_ref, int val){
    //Allocate Node
    Node* new_node = new Node();

    // make a pointer to iterate to last
    Node *last = *head_ref;

    // Put in data
    new_node->data = val;

    //Make next of new_node equal to NULL
    new_node->next = NULL;

    // If the linked list is empty then make
    // the new node as head.
    if ( *head_ref == NULL ){
        *head_ref = new_node;
        return;
    }

    //Else traverse to the last Node
    while ( last->next != NULL ){ //Important to note **
        last = last->next;
    }

    //change the next of the last node
    last->next = new_node;
    return;
}


// Print the linked list given the pointer to a starting node.
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



int main(){
    //Start with the empty list
    Node* head = NULL;

    //Insert 

    append(&head,8);
    push(&head, 9);
    push(&head,7);
    push(&head,5);
    append(&head,23);

    //insert 8 after 7 
    insertAfter(head->next, 8);

    cout << "Created Linked List is:" << endl;
    printList(head);
    return 0;
}