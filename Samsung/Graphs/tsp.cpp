// In Hamiltonian Cycle Problem, we need to find
// if there exist a tour that visits every city exactly once.
// In TSP we need to find the minimum weight Hamiltonian Cycle.

// It is a np Hard Problem.
// Implementation is :
// Generate all (n-1)! permutations and keep track of
// minimum cost permutation.
// Return the permutation with minimum cost.


#include <bits/stdc++.h>

using namespace std;

#define V 4

int tsp(int graph[][V], int s){
    vector<int> vertex;
    for ( int i=0 ; i<V ; i++ ){
        if (i!= s){
            vertex.push_back(i);
        }
    }

    //store minimum weight hamiltonian cycle
    int min_path = INT_MAX;
    do {
        int current_pathweight=0;

        //compute current path weight
        int k=s;
        for ( int i=0 ; i<vertex.size() ; i++ ){
            current_pathweight +=graph[k][vertex[i]];
            k = vertex[i];
        }
        current_pathweight +=graph[k][s];

        //upadte minimum
        min_path = min(min_path, current_pathweight);
    } while (next_permutation(vertex.begin(), vertex.end()));
    return min_path;
}

// driver program to test above function 
int main() 
{ 
    // matrix representation of graph 
    int graph[][V] = { { 0, 10, 15, 20 }, 
                       { 10, 0, 35, 25 }, 
                       { 15, 35, 0, 30 }, 
                       { 20, 25, 30, 0 } }; 
    int s = 0; 
    cout << tsp(graph, s) << endl; 
    return 0; 
} 