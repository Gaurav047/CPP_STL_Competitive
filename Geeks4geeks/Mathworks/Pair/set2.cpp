#include <bits/stdc++.h>
#include <iostream>
#include <utility>

using namespace std;

bool sortbysec(const pair<string, pair<int, int> > &a, const pair<string, pair<int, int> > &b){
    if ( a.second.first < b.second.first ){
        return true;
    }
    else if ( a.second.first < b.second.first ){
        return false;
    }
    else if ( a.second.first == b.second.first ){
        if ( a.second.second < b.second.second ){
            return true;
        }
        else {
            return false;
        }
    }
}

int main(){
    int T,Q;
    char op;
    pair<int,int> p1;
    int p1f,p1s;
    string s;
    pair<string, pair<int, int> > p2;
    vector<pair<string,pair<int, int> > > A; 
    cin >> T;
    while(T--){
        cin >> Q;
        while(Q--){
            cin >> op;
            if ( op == 'a' ){
                cin >> s;
                cin >> p1f;
                cin >> p1s;
                p2.first = s;
                p2.second.first = p1f;
                p2.second.second = p1s;
                A.push_back(p2);
            }
            else if ( op == 'b' ){
                cout << A.size() << endl;
            }
            else if ( op == 'c' ){
                for ( int i=0 ; i<A.size() ; i++ ){
                    cout << A[i].first << " " << A[i].second.first << " " << A[i].second.second << " ";
                }
                cout << endl;
            }
            else if ( op == 'd' ){
                sort(A.begin(), A.end(), sortbysec );
                
            }
        }
        A.clear();
    }
}