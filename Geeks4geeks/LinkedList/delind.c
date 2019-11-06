#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void push( struct Node** head_ref, int new_data){
    struct Node* new_node = ( struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deleteNode(struct Node **head_ref, int position){
    //In Case of empty linked list
    if (*head_ref == NULL ){
        return;
    }

    // Store head node
    struct Node* temp = *head_ref;

    // If head needs to be removed
    if (position == 0 ){
        *head_ref = temp->next;
        free(temp);
        return;
    }

    //Find previous node of the node to be deleted:
    for ( int i=0; temp!=NULL && i<position-1; i++ ){
        temp = temp->next;
    }

    // If position is more than number of nodes
    if ( temp == NULL || temp->next == NULL)
        return;

    //Node temp->next is the node to be deleted
    // Store pointer to the next node to be deleted
    struct Node *next = temp->next->next;

    //Unlink the node from linked list
    free(temp->next); // Free memory

    temp->next = next; // Unlink the deleted node from list

}

//This function prints the contents of the linked list
void printList( struct Node *node){
    while( node != NULL ){
        printf(" %d ", node->data);
        node = node->next;
    }
}

//Driver Program
int main(){
    struct Node* head = NULL; //Initialising a empty linked list

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 8);

    puts("Created Linked list: ");
    printList(head);
    deleteNode(&head, 0);
    puts("\nLinked List after Deletion at position 0: ");
    printList(head);
    return 0;
}