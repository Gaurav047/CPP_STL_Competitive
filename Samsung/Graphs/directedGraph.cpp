#include <iostream>
using namespace std;

// Data structure to store Adjacency list node
struct Node {
    int data;
    struct Node* next;
};

// Data structure to store graph edges
struct Edge {
    int src, dest;
};

class Graph {
    //Function to allocate new node of Adjacency List
    Node* getAdjListNode(int dest, Node* head){
        Node* newNode = new Node;
        newNode->data = dest;

        // Point new node to current head
        newNode->next = head;

        return newNode;
    }
    int N; // Number of Nodes in the graph

    public:
        // An array of pointers to Node to represent 
        // an adjacency list
        Node **head;
        
        //constructor
        Graph(Edge edges[], int n, int N){
            // allocate memory
            head = new Node*[N]();
            this->N = N;

            //initialize head pointer for all vertices.
            for ( int i=0 ; i<N ; i++ ){
                head[i] = nullptr;
            }
        }
}