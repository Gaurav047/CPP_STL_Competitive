#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V; //no. of vertices
    list<int > *adj; // an array of list
    void DFSUtil(int v, bool visited[] );
    public:
        Graph(int V); //Constructor
        void addEdge(int v, int w);
        void DFS(); 
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int> [V];
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}

void Graph::DFSUtil(int v, bool visited[]){
    //Mark v as visited
    visited[v] = true;
    cout << v << " ";

    //Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for ( i = adj[v].begin() ; i!=adj[v].end() ; i++ ){
        if ( !visited[*i] ){
            DFSUtil(*i,visited);
        }
    }
}

void Graph::DFS(){
    //Mark all the vertices as not visited
    bool *visited = new bool[V];
    for ( int i=0 ; i<V ; i++ ){
        visited[i] = true;
    }

    //Call the recursive DFSUtil() to Print DFS traversal
    for ( int i=0 ; i<V ; i++ ){
        if ( visited[i] != false ){
            DFSUtil(i, visited);
        }
    }
}

int main() 
{ 
    // Create a graph given in the above diagram 
    Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
  
    cout << "Following is Depth First Traversal: "; 
    g.DFS(); 
  
    return 0; 
} 