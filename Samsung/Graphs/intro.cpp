/** Graphs are used to represent networks.
 * The networks may include paths in a city or
 * telephone networks or a circuit network.
 * Graphs are also used in social networks like
 * Facebook, twitter, and linkdin etc. For example:
 * Each person is represented with a Vertex(node).
 * Each node is a structure and contains information
 * like person_id, name, gender and locale.
 * **/

/**Following two are the most commonly used representations of a graph:
 * 1. Adjacency Matrix
 * 2. Adjacency List
 * **/

/**Pros of using an Adjacency Matrix
 * Removing an edge takes O(1) time. Queries like whether
 * there is an edge from vertex 'u' to vertex 'v' are efficient
 * an can be done O(1). 
 * **/

/**Cons of using an Adjacency Matrix
 * Consumes more space O(n^2).
 * Even if the graph is sparse, it consumes the same space.
 * Adding a vertex is O(V^2) time.
 * **/

/**Adjacency List:
 * An array of lists is used.
 * Size of the array is equal to the number of vertices.
 * An entry Array[i] represents a List of vertices adjacent to the ith vertex.
 * This representation can also be used to represent a weighted graph.
 * The weights of edges can be represented as lists of pairs.
 * **/

/**Pros:
 * Saves space O(|V|+|E|). In the worst case, there can be 
 * C(V,2) number of edges in a graph, thus consuming O(V^2) space.
 * Adding a vertex is easy.
 * **/

/**Cons:
 * Queries like whether there is an edge from vertex u to vertex v
 * are not efficient and can be done O(V).
 * **/

// A simple CPP program to to represent graph using STL
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// A utility function to add an edge in an undirected graph.
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// A utility function to print the adjacency list 
// representation of a graph
void printGraph(vector<int> adj[], int V){
    for ( int v=0 ; v < V ; v++ ){
        cout << "\n Adjacency list of vertex" << v << "\n head";
        for ( auto x : adj[v])
            cout << "->" << x;
        cout << endl; 
    }
}

int main(){
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    printGraph(adj, V);
    return 0;
}