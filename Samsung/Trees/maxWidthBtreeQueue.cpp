#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

int maxWidth(struct Node* root){
    // Base Case
    if ( root == NULL )
        return 0;
    //Initialize result
    int result  = 0;

    // Do level order traversal keeping track of number
    // of nodes at every level
    queue<Node* > q;
    q.push(root);
    while(!q.empty()){
        int count = q.size();

        result  = max(count, result);

        while(count--){
            Node* temp = q.front();
            q.pop();


            //Enqueue left and right children of dequeued node.
            if ( temp->left != NULL )
                q.push(temp->left);
            if ( temp->right != NULL )
                q.push(temp->right);
        }
    }
    return result;
}

struct Node* newNode(int data){
    struct Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}

int main(){
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    cout << "Maximum Width is : " << maxWidth(root) << endl;
    return 0;
}