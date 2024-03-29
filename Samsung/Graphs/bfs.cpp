#include <bits/stdc++.h>

using namespace std;

class Graph{
    int V; // no. of vertices of the graph

    list<int > *adj;
    public :
       Graph(int V); // Constructor

       // function to add an edge directed from v to w.
       void addEdge(int v, int w);

       //Print the bfs traversal of a graph from source vertex s.
       void BFS(int s);
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int > [V];
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w); // add w to adjlist of v.
}

void Graph::BFS(int s){
    //Mark all the vertices as not visited.
    bool *visited = new bool[V];
    for ( int i=0 ; i<V ; i++ ){
        visited[i] = false;
    }

    //Create a queue for BFS
    list<int > queue;

    //Mark the current node as visited and enqueue it.
    visited[s] = true;
    queue.push_back(s);

    // 'i' will be used to get all adjacent vertices
    // of a vertex
    list<int >:: iterator i;
    
    while(!queue.empty()){
        //Dequeue the front element of queue
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        for ( i = adj[s].begin() ; i != adj[s].end() ; i++  ){
            if ( !visited[*i] ){
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

// Driver program to test methods of graph class 
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
  
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n"; 
    g.BFS(2); 
  
    return 0; 
} 
