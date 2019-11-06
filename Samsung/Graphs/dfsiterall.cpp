#include <bits/stdc++.h>

using namespace std;

class Graph{
    int V; // no. of vertices
    list<int > *adj; // adjacency list of graph
    public:
        Graph(int V); //constructor
        void addEdge(int v, int w);
        // Prints all reachable vertices using dfs from s
        void DFSUtil(int s, vector<bool> &visited);
        //Prints all vertices using DFS.
        void DFS();
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int> [V];
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}

void Graph::DFSUtil(int s, vector<bool > &visited ){

    //Create a stack for DFS
    stack<int> stack;

    //Push the current source node
    stack.push(s);

    while(!stack.empty()){

        //pop the stack top
        s = stack.top();
        stack.pop();

        if (!visited[s]){
            cout << s << " "; 
            visited[s] = true;
        }
        for ( auto i = adj[s].begin() ; i!=adj[s].end() ; i++ ){
            if ( !visited[*i] ){
                stack.push(*i);
            }
        }
    }
}

void Graph::DFS(){
    vector<bool > visited(V,false);

    for ( int i=0 ; i<V ; i++ ){
        if ( !visited[i] ){
            DFSUtil(i, visited);
        } 
    }
}

// Driver program to test methods of graph class 
int main() 
{ 
    Graph g(5);  // Total 5 vertices in graph 
    g.addEdge(1, 0); 
    g.addEdge(2, 1); 
    g.addEdge(3, 4); 
    g.addEdge(4, 0); 
  
    cout << "Following is Depth First Traversal\n"; 
    g.DFS(); 
  
    return 0; 
} 
