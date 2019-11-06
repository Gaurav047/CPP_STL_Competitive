#include <bits/stdc++.h>

using namespace std;



vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if ( matrix.size() == 0 ){
            return ans;
        }
        int temp;
        
        int i; //iterator
        int rs=0; //starting row index
        int re=matrix.size()-1; //ending row index
        int cs=0; //starting column index
        int ce=matrix[0].size()-1; //ending column index
        
        
        while ( rs<=re && cs<=ce ){
            
            // Printing the first row out of the remaining rows
            for ( i=cs ; i<=ce ; i++ ){
                temp = matrix[rs][i];
                ans.push_back(temp);
            }
            rs++;
            
            // Printing the last column out of the remaining columns
            for ( i=rs ; i<=re ; i++ ){
                temp = matrix[i][ce];
                ans.push_back(temp);
            }
            ce--;
            
            //Printing the last remaining row
            if ( rs <= re ){
                for ( i=ce ; i>=cs ; i-- ){
                    temp = matrix[re][i];
                    ans.push_back(temp);
                }
                re--;
            }
            
            //Printing the first remaining column
            if ( cs <= ce ){
                for ( i=re ; i>=rs ; i-- ){
                    temp = matrix[i][cs];
                    ans.push_back(temp);
                }
                cs++;
            }
        }
        return ans;
    }
int main(){
    int N=5; // rows
    int M=5; // columns
    vector<vector<int>> A(N, vector<int> (M,0));
    int count =1;
    for ( int i=0 ; i<N ; i++ ){
        for ( int j=0 ; j<M ; j++ ){
            A[i][j] = count++;
        }
    }

    vector<int> spiral;

    spiral = spiralOrder(A);

    for ( int i=0 ; i<N ; i++ ){
        for ( int j=0 ; j<M ; j++ ){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    for ( int i=0 ; i<N*M ; i++ ){
        cout << spiral[i] << " ";
    }
    return 0;
}