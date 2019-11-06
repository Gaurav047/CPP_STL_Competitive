#include <bits/stdc++.h>
#include <iostream>

using namespace std;

vector<int> findDiag( vector<vector<int> > matrix ){
    int n = matrix.size(); // no. of rows
    int m = matrix[0].size(); // no. of columns

    vector<int> ans;
    for ( int i=0 ; i<n+m-1 ; i++ ){
        if ( i & 1 ){
            for ( int j = min(i, m-1 ) ; j>= max(i-n+1, 0) ; j--)
                ans.push_back(matrix[i-j][j]);
        }
        else {
            for ( int j = max(i-n+1, 0); j<=min(i,m-1); j++ )
                ans.push_back(matrix[i-j][j]);
        }
    }
    return ans;
}

int main(){
    vector<vector<int> >  v(4, vector<int> (4));
    
    for ( int i=0 ; i<4 ; i++ ){
        for ( int j=0 ; j<4 ; j++ ){
            v[i][j] = 2*i + j + 1;
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> diag;
    diag = findDiag(v);
    for ( int i=0 ; i<16 ; i++ ){
        cout << diag[i] << " ";
    }
    return 0;
}