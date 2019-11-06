/** There three basic ways to traverse a Binary tree:
 * 1) Inorder (Left, Root, Right)
 * 2) Preorder (Root, Left, Right)
 * 3) Postorder (Left, Right , Root)
 * **/

#include <iostream>
using namespace std;

// A basic tree node
struct Node{
    int data;
    struct Node* left, *right;
    Node ( int data ){
        this->data = data;
        left = right = NULL;
    }
};

//Bottom up postorder traversal
void printPostOrder(struct Node* root){
    if ( root == NULL ){
        return;
    }

    // First recur on left subtree
    printPostOrder(root->left);
    
    // Then recur on the right subtree
    printPostOrder(root->right);

    // Now print the root
    cout << root->data << " ";
}

void printInOrder( struct Node* root ){
    if ( root == NULL ){
        return;
    }

    //First recur on Left Subtree
    printInOrder(root->left);

    //Then print root
    cout << root->data <<  " ";

    //Then recur on the right subtree
    printInOrder(root->right);
}

void printPreOrder( struct Node* root ){
    if ( root == NULL ){
        return;
    }

    cout << root->data << " ";

    // First recur on the left subtree
    printPreOrder(root->left);

    // Then recur on the right subtree
    printPreOrder(root->right);

}

int main() 
{ 
    struct Node *root = new Node(1); 
    root->left             = new Node(2); 
    root->right         = new Node(3); 
    root->left->left     = new Node(4); 
    root->left->right = new Node(5);  
  
    cout << "\nPreorder traversal of binary tree is \n"; 
    printPreOrder(root); 
  
    cout << "\nInorder traversal of binary tree is \n"; 
    printInOrder(root);  
  
    cout << "\nPostorder traversal of binary tree is \n"; 
    printPostOrder(root); 
  
    return 0; 
} 
