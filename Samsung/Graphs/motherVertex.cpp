#include <bits/stdc++.h>

using namespace std;

class Graph{
    int V;
    list<int > *adj;

    void DFSUtil(int v, vector<bool> &visited);
    public:
        Graph(int V); //Constructor
        void addEdge(int v, int w);
        int findMother();
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int> [V];
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}

void Graph::DFSUtil(int s, vector<bool> &visited){
    visited[s] = true;
    list<int>::iterator i;
    for ( i= adj[s].begin() ; i!=adj[s].end() ; i++ ){
        if ( !visited[*i] ){
            DFSUtil(*i,visited);
        }
    }
}

int Graph::findMother(){
    vector<bool > visited(V, false);

    int v=0;// variable to store the last dfs element
    for ( int i=0; i<V ; i++ ){
        if (!visited[i]){
            DFSUtil(i,visited);
            v = i;
        }
    }
    
    // To check if v is one of the mother
    // vertices, check if every other vertex is reachable from
    // v.
    fill(visited.begin(), visited.end(), false);
    DFSUtil(v, visited);
    for ( int i=0 ; i<V ; i++ ){
        if ( !visited[i] ){
            return -1;
        }
    }
    return v;
}

// Driver program to test above functions 
int main() 
{ 
    // Create a graph given in the above diagram 
    Graph g(7); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 3); 
    g.addEdge(4, 1); 
    g.addEdge(6, 4); 
    g.addEdge(5, 6); 
    g.addEdge(5, 2); 
    g.addEdge(6, 0); 
  
    cout << "A mother vertex is " << g.findMother(); 
  
    return 0; 
} 