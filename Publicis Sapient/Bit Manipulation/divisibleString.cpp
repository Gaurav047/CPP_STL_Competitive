#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string A;
    string B;
    A = "asdasdasd";
    B = "asdasdasdasdasdasd";
    int nA = A.length();
    int nB = B.length();
    set<char> s1;
    set<char> s2;
    set<char>::iterator itr;
    for ( int i=0 ; i<A.length() ; i++ ){
        s1.insert(A[i]);
    }
    for ( int i=0 ; i<B.length() ; i++ ){
        s2.insert(B[i]);
    }
    if ( s1 == s2 ){
        if ( nB%nA == 0 ){
            for ( itr = s1.begin() ; itr != s1.end() ; itr++ ){
                cout << *itr;
            }
            cout << endl;
        }
        else {
            cout << "Not Divisible"<< endl;
        }
    }
    else {
        cout << "Not Divisible"<< endl;
    }
    return 0;
}