// Unlike Arrays, Linked Lists, Stacks and Queueus, which are linear data structures
// trees are heirarchical data structures.

// Topmost node is called the root of the tree.
// The elements that are directly under an element are called its
// children. The element directy above something is called its parent.

// Why to use trees?
// One reason to use trees is because we want to store information
// that naturally forms a heirarchy.
// For example : file system on a computer.

// Main applications of trees include:
// 1) Manipulate heirarchial data.
// 2) Make information easy to search.
// 3) Manipulate sorted lists of data.
// 4) As a workflow for compositing digital images for visual effects.
// 5) Router Algorithms.
// 6) Form of a multi-stage decision-making.

/**
 * A Binary tree is the one which has at most two children.**/
// Basic tree structure

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode(int data){
    struct node* node = (struct node*)malloc(sizeof(struct node));

    //Assign data to this node
    node->data = data;

    //Initialize left and right children as NULL
    node->left = NULL;
    node->right = NULL;

    return node;
}

int main() 
{ 
  /*create root*/
  struct node *root = newNode(1);   
  /* following is the tree after above statement  
  
        1 
      /   \ 
     NULL  NULL   
  */
    
  
  root->left        = newNode(2); 
  root->right       = newNode(3); 
  /* 2 and 3 become left and right children of 1 
           1 
         /   \ 
        2      3 
     /    \    /  \ 
    NULL NULL NULL NULL 
  */
  
  
  root->left->left  = newNode(4); 
  /* 4 becomes left child of 2 
           1 
       /       \ 
      2          3 
    /   \       /  \ 
   4    NULL  NULL  NULL 
  /  \ 
NULL NULL 
*/
  return 0;
}