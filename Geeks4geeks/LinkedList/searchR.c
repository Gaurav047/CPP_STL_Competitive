#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool searchr(struct Node *head, int x ){
    
    //Base case
    if ( head == NULL ){
        return false;
    }
    if ( head->data == x ){
        return true;
    }
    
    return searchr(head->next, x);
}

//Driver Program

int main(){
    struct Node* head = NULL;

    bool arg = false;

    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    //Search for 2 in the list

    arg = searchr(head, 2);

    if ( arg){
        printf("2 is present in the list.");
    }
    else {
        printf("2 is not present in the list.");
    }
    return 0;
}