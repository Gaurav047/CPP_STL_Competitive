#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Given a reference (pointer to pointer) to the 
// head of the linked list and an integer, push
// a new node on the front of the list.

void push(struct Node **head_ref, int new_data ){
    //allocate node
    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));

    // put in data
    new_node->data = new_data;

    // link the old list off the new node
    new_node->next = (*head_ref);

    // move the head to point to the new node
    (*head_ref) = new_node;
}

// Count the number of nodes in the linked list

int getCount(struct Node *head ){
    //Base case
    if ( head == NULL ){
        return 0;
    }
    return 1 + getCount(head->next);
}

//Driver Program

int main(){
    struct Node* head = NULL;

    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    printf("Count of nodes is %d", getCount(head));
    return 0;
}