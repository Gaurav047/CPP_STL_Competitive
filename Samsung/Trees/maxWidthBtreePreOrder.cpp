#include <bits/stdc++.h>

using namespace std;

class node {
    public :
        int data;
        node* left;
        node* right;
};

// Prototype of height function 
int height(node* root);

// Prototype of newNode function to allocate a node with given data
node* newNode( int data );


//Function that returns maximum value of an array.
int getMax( int arr[], int n);

// A function which fills count array with number of nodes at each level.
void getMaxWidthRecur(node* root, int count[], int level);

// function to return height of a node.
int height(node* root){
    if ( root == NULL ){
        return 0;
    }
    else {
        int lHeight = height(root->left);
        int rHeight = height(root->right);

        return (lHeight > rHeight )? (lHeight+1): (rHeight+1);
    }
}

node* newNode(int data){
    node* Node = new node();
    Node->data = data;
    Node->left = Node->right = NULL;
    return (Node);
}

int getMax ( int arr[] , int n){
    int max = arr[0];
    int i;
    for ( i=0 ; i<n ; i++ ){
        if ( arr[i] > max )
            max = arr[i];
    }
    return max;
}

void getMaxWidthRecur(node* root, int count[], int level){
    if (root){
        count[level]++;
        getMaxWidthRecur(root->left, count, level+1);
        getMaxWidthRecur(root->right, count, level+1);
    }
}

int getMaxWidth(node* root){
    int width;
    int h = height(root);

    // Create an array that will store count of nodes
    // at each level;
    int *count = new int[h];

    int level=0;

    //Fill the count array using preorder traversal
    getMaxWidthRecur(root,count, level);

    //Return the Maximum value from count array
    return getMax(count,h);
}


int main(){
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    cout << "Maximum width is : " << getMaxWidth(root) << endl;
    return 0;
}