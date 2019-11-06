#include <bits/stdc++.h>

using namespace std;

int main(){
    int numRows = 5;
    vector<vector<int> > pascal(numRows);
    for ( int i=1 ; i<=numRows ; i++ ){
        int colSize = i;
        pascal[i-1] = vector<int>(colSize);
    }
    cout << pascal.size() <<endl;
    pascal[0][0] = 1;
    pascal[1][0] = 1;
    pascal[1][1] = 1;
    for ( int i=2 ; i<numRows ; i++ ){
        for ( int j=0 ; j<pascal[i].size() ; j++ ){
            if ( j==0 ){
                pascal[i][j] = 1;
            }
            else {
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }
    for ( int i=0 ; i<pascal.size() ; i++ ){
        for ( int j=0 ; j<pascal[i].size() ; j++ ){
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}