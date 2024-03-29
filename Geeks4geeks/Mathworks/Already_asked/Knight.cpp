/***
The problem of minimum number of steps for the Knight can be solved using
a shortest path in Unweighted graph. Therefore we use BFS to solve this problem.
We try all 8 possible positions where a Knight can reach from its initial position.
If reachable position is not already visited and is inside the board,
we push this state into queue with distance of target position, when it gets pop out
from queue.
Following code implements BFS for searching through cells, where 
each cell contains its coordinate and distance from starting node.
In Worst case, below code visits all cells of board,making worst-time complexity as O(N^2)
***/

#include <bits/stdc++.h>
using namespace std;

struct cell{
    int x, y;
    int dis;
    cell(){}
    cell(int x, int y, int dis) : x(x), y(y), dis(dis) {}
};

// Utility method return true if (x,y) lies inside board

bool isInside( int x, int y, int N){
    if ( x >= 1 && x <= N && y >= 1 && y <= N )
        return true;
    return false;
}

// Method returns minimum steps to reach target position
int minStepToReachTarget( int knightPos[], int targetPos[], int N){
    int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

    //queue for storing states of Knight in board
    queue<cell> q;

    cell t;
    int x, y;
    bool visit[N+1][N+1];

    //make all cell unvisited
    for ( int i=1; i<=N; i++ ){
        for ( int j=1; j<=N; j++){
            visit[i][j] = false;
        }
    }

    // visit starting state
    visit[knightPos[0]][knightPos[1]] = true;

    //loop until we have one element in queue
    while (!q.empty() ){
        t = q.front();
        q.pop();

        //If current cell is equal to target cell,
        // return its distance
        if (t.x == targetPos[0] && t.y == targetPos[1])
            return t.dis;

        // loop for all reachable states
        for ( int i=0; i<8; i++ ){
            x = t.x + dx[i];
            y = t.y + dy[i];

            // If reachable state is not yet visited and 
            // inside board, push that state into queue
            if ( isInside(x, y, N) && !visit[x][y]){
                visit[x][y] = true;
                q.push(cell(x, y, t.dis + 1));
            }
        }
    }
}

int main(){
    int N = 30;
    int knightPos[] = {1, 1};
    int targetPos[] = {30, 30};
    cout << minStepToReachTarget(knightPos, targetPos, N);
    return 0;
}

