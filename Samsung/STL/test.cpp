#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int > A;
    A = {2, 3, 12, 5, 10, 7, 8};
    for ( auto i = A.begin() ; i!=A.end() ; i++ ){
        if ( *i == 5 )
            A.erase(i);
    }
    for ( auto i=A.begin() ; i!=A.end() ; i++ ){
        cout << *i << " ";
    }
    cout << endl;
}