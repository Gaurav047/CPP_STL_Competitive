//Program to print the BFS traversal of a directed graph

#include <bits/stdc++.h>
#include <iostream>
#include <list>

using namespace std;

class Graph{
    int V; // No. of vertices

    //Pointer to an array containing adjacency
    //lists
    list<int> *adj;
    public:
        Graph(int V); //constructor

        void addEdge(int V, int W); //Function to add an edge to graph

        //Prints BFS traversal from a given source s
        void BFS(int s);
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int> [V];
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w); // Add w to v's list
}

void Graph::BFS(int s){
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for ( int i=0 ; i<V ; i++ ){
        visited[i] = false;
    }

    //Create a queue for BFS
    list<int > queue;

    //Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    // 'i' will be used to get all adjacent
    // vertices of a vertex
    list<int>:: iterator i;

    while(!queue.empty()){
        //Dequeue a vertex from the front of queue
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        // Get all adjacent vertices of the dequeued vertex s.
        // If adjacent vertex is not visited then visit it.
        for ( i=adj[s].begin() ; i!=adj[s].end() ; i++ ){
            if ( !visited[*i] ){
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

int main() 
{ 
    // Create a graph given in the above diagram 
    Graph g(11); 
    g.addEdge(0, 1); 
    g.addEdge(1, 2); 
    g.addEdge(1, 4); 
    g.addEdge(1, 5); 
    g.addEdge(1, 9); 
    g.addEdge(2, 3); 
    g.addEdge(4, 3); 
    g.addEdge(5, 6);
    g.addEdge(9, 10);
    g.addEdge(6, 8);
    g.addEdge(6, 7);
    g.addEdge(10, 7); 
 

    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 0) \n"; 
    g.BFS(0); 
  
    return 0; 
} 