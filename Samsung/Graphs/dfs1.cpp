#include <bits/stdc++.h>

using namespace std;

class Graph{
    int V; // number of vertices of graph
    list<int > *adj; // an array of lists to store the graph
    
    void DFSUtil(int V, bool visited[]);
    public:
        Graph(int V); //Constructor
        void addEdge(int v, int w); // Add an adge from v to w
        void DFS(int s); // dfs from a source vertex 's'. 
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int > [V];
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}

void Graph::DFSUtil(int v, bool visited[] ){
    //Mark the current node as visited
    visited[v]  = true;
    cout << v << " ";

    //Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for ( i = adj[v].begin(); i!=adj[v].end() ; i++ ){
        if ( !visited[*i] ){
            DFSUtil(*i, visited);
        }
    }
}

void Graph::DFS(int v){
    //Mark all the vertices as not visited
    bool *visited = new bool[V];
    for ( int i=0 ; i<V ; i++ ){
        visited[i] = false;
    }

    //Call the recursive function to print the DFS traversal.
    DFSUtil(v,visited);
}

// Driver code 
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
  
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n"; 
    g.DFS(0); 
  
    return 0; 
} 