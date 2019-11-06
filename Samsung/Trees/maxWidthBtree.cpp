// Given a binary tree, write a function to get the maximum
// width of the given tree. Width of a tree is maximum of widths of all levels.

// Method 1
// Level order traversal : O(n^2)

#include <bits/stdc++.h>
using namespace std;

class node {
    public :
        int data;
        node* left;
        node* right;
};

// Function Prototypes
int getWidth(node* root, int level); // Find the width of a level
int getMaxWidth(node* root); // Find maximum width.
node* newNode(int data); // create a newNode using integer data.

// Get width of a given level
int getWidth(node* root, int level){
    if (root == NULL )
        return 0;
    if ( level == 1)
        return 1;
    else if ( level > 1 ){
        return getWidth(root->left, level-1) + getWidth(root->right, level-1);
    }
}

// Height of a tree
int height(node* root){
    if ( root == NULL )
        return 0;
    else {
        int lHeight = height(root->left);
        int rHeight = height(root->right);

        return (lHeight > rHeight )? (lHeight+1):(rHeight+1);
    }
}


int getMaxWidth(node* root){
    int maxWidth = 0;
    int width;
    int h = height(root);
    int i;
    // Get width of each level and compare with maximum width so far.
    for ( i=1 ; i<=h ; i++ ){
        width = getWidth(root,i);
        if (maxWidth < width ){
            maxWidth = width;
        }
    }
    return maxWidth;
}

//Allocates a new node with the given data 
// and NULL left and right pointers

node* newNode(int data){
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return (Node);
}

int main(){
    node* root = newNode(1);
    root-> left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    cout << "Maximum width of the Tree is: "<<getMaxWidth(root) << endl;

    return 0;
}

