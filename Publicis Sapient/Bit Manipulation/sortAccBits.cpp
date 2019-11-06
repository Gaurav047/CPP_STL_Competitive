#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool cmp ( const pair<int, int> p1, const pair<int, int> p2){
    return( p1.second < p2.second );
}

int main(){
    vector<int> A;
    A = {1, 3, 5, 1, 12, 7, 12, 87};
    vector<int> hash;
    for ( int i=0 ; i<A.size() ; i++ ){
        int temp = __builtin_popcount(A[i]);
        hash.push_back(temp);
    }
    vector<pair<int, int > > V_pair;
    for ( int i=0 ; i<A.size() ; i++ ){
        pair<int, int > p;
        p.first = A[i];
        p.second = hash[i];
        V_pair.push_back(p);
    }
    sort(V_pair.begin() , V_pair.end() , cmp );
    for ( int i=0 ; i<A.size() ; i++ ){
        cout << V_pair[i].first << " ";
    }
    cout << endl;

}