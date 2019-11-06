// A Binary Tree (B Tree is represented by its root node, while the complete BTree is built as : )

/***
Main applications of trees include:
1. Manipulate hierarchical data.
2. Make information easy to search (see tree traversal).
3. Manipulate sorted lists of data.
4. As a workflow for compositing digital images for visual effects.
5. Router algorithms
6. Form of a multi-stage decision-making (see business chess).
***/
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode( int data ){
    // Allocate memory to new node
    struct node* node = (struct node*)malloc(sizeof(struct node));

    // Assign data to this node
    node->data = data;

    // Assign left and right children as NULL
    node->left = NULL;
    node->right = NULL;
    return (node);
}

int main(){
    //create root
    struct node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);

    getchar();
    return 0;
}