#include <bits/stdc++.h>

using namespace std;

class Graph {
    int V; // no. of vertices
    list<int> *adj; // array to lists
    public:
        Graph(int V); //Constructor
        void addEdge(int v, int w);
        void dfs(int s);
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int> [V];
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}

void Graph::dfs(int s){
    bool *visited;
    visited = new bool[V];
    //Mark all nodes as unvisited.
    for ( int i=0 ; i<V ; i++ ){
        visited[i] = false;
    }

    stack<int> stack; // create a stack for dfs

    stack.push(s);
    while(!stack.empty() ){
        //Pop a vertex from the stack and print it
        s = stack.top();
        stack.pop();
        if (!visited[s]){
            cout << s << " ";
            visited[s] = true;
        }

        //Get all adjacent vertices of the popped vertex
        for ( auto i = adj[s].begin() ; i!=adj[s].end() ; i++ ){
            if ( !visited[*i] ){
                stack.push(*i);
            }
        }
    }
}

// Driver program to test methods of graph class 
int main() 
{ 
    Graph g(5); // Total 5 vertices in graph 
    g.addEdge(1, 0); 
    g.addEdge(0, 2); 
    g.addEdge(2, 1); 
    g.addEdge(0, 3); 
    g.addEdge(1, 4); 
  
    cout << "Following is Depth First Traversal\n"; 
    g.dfs(0); 
  
    return 0; 
} 