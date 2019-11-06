// A very basic CPP program to demonstrate implementation
// of a singly Linked List in C

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList( struct Node* head){
    
    struct Node* iter = NULL; // The iterator
    iter = (struct Node*)malloc(sizeof(struct Node));
    iter = head;
    while (iter != NULL ){
        int temp = iter->data;
        printf("%d ",temp);
        iter = iter->next;
    }
    return;
}

int main(){
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Allocate three nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 5;
    third->next = NULL;

    printList(head);
    
    return 0;
}