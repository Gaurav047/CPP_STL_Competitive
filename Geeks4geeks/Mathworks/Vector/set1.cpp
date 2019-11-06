//#include <iostream>
#include <bits/stdc++.h>
//#include <algorithm>

using namespace std;

int main(){
    int T,Q, aint; //T = Test Cases, Q = Queries, aint = integer corresponding to a
    char op; //op = operation 
    cin >> T;
    vector <int> A;
    for ( int i=0 ; i<T ; i++ ){
        cin >> Q;
        for ( int j = 0 ; j<Q ; j++ ){
            cin >> op;
            if ( op == 'a' ){
                cin >> aint;
                A.push_back(aint);
            }
            else if ( op == 'b' ){
                //int n = sizeof(A)/sizeof(A[0]); 
                sort(A.begin(), A.end());
            }
            else if ( op == 'c' ){
                reverse(A.begin(), A.end());
            }
            else if ( op == 'd' ){
                cout << A.size() << endl;
            }
            else if ( op == 'e' ){
                for ( int i = 0 ; i< A.size() ; i++ ){
                    cout << A[i] << " ";
                }
                cout << endl;
            }
            else if ( op == 'f' ){
                //int n = sizeof(A)/sizeof(A[0]); 
                sort ( A.begin(), A.end(), greater<int>());
            }
        }
    }

    return 0;
}