#include <iostream>

using namespace std;


//class type for a Node
class Node {
    public :
        int data;
        Node* next;
};



// Printing the list
void printList(Node* head){
    Node* temp = new Node();
    temp = head;
    if ( head == NULL ){
        cout << "The Linked List is empty!!" << endl;
    }
    while ( temp != NULL ){
        int node_data = temp->data;
        cout << node_data << " ";
        temp = temp->next;
    }
}

//push the node at front of the Linked List
void push(Node** head_ref, int val){
    Node* new_node = new Node(); // Allocate the new Node
    new_node->data = val;
    new_node->next = NULL;
    if ( *head_ref == NULL ){
        *head_ref = new_node;
        return;
    }
    new_node->next = *head_ref;
    *head_ref = new_node;
}

// Append the Node at the back of the Linked List
void append( Node** head_ref , int val){
    Node* new_node = new Node(); //Allocate the new Node
    new_node->data = val;
    new_node->next = NULL;
    if ( *head_ref == NULL ){
        *head_ref = new_node;
        return;
    }
    Node* last = *head_ref; // Find the last element
    while( last->next != NULL ){
        last = last->next; // iterate till last points to the last Node
    }
    last->next = new_node; // last->next will now point to the new_node which is appended at the rear end.
}

// Insert the Node after a designated node before the position 
// where the node is to be added
void insertAfter( Node* prev_node, int val){
    Node* new_node = new Node(); // Allocate new Node in heap
    new_node->data = val;   // Assign value to new Node
    new_node->next = prev_node->next;

    // Now shift the prev->next
    prev_node->next = new_node;
}

// Given a value, delete the first occurence of this value
// in the Linked List.
void deleteNode( Node** head_ref , int val ){
    Node* iter = *head_ref;
    if ( *head_ref == NULL ){
        cout << "The List is empty !!!" << endl;
        return;
    }
    if ( iter->data == val){
        *head_ref = iter->next;
        return;
    }
    while( iter->next->data != val ){
        iter = iter->next;
    }
    iter->next = iter->next->next; // delete the node
}

// Delete a node at a given position 
// i.e. according to the array indexing
void deletePos(Node** head_ref , int position ){
    Node* iter = *head_ref;
    if ( iter == NULL ){
        cout << "The List is empty" << endl;
        return;
    }
    if ( position == 0 ){
        *head_ref = iter->next;
        return;
    }
    int count =0;
    while( count != position-1 ){
        iter = iter->next;
        count++;
    }
    iter->next = iter->next->next;
}

int main(){
    Node* head = new Node();
    head->data = 8;
    head->next = NULL;
    push(&head,8);
    push(&head,3);
    push(&head,2);
    push(&head,5);
    push(&head,10);
    append(&head, 67);
    append(&head,-2);
    insertAfter(head->next->next,78);

    cout << "Original List :" << endl;
    printList(head);
    cout << endl;
    int delVal = head->data;
    deletePos(&head,8);
    cout << "Updated List after deleting the last Node:" << endl;
    printList(head);
    return 0;
}

//Conclusion:

// insertion takes O(1) in a Linked List.
// push takes O(1) in a Linked List.
// Append takes O(n) in a Linked List.
// Deletion takes O(n) in a Linked List.
