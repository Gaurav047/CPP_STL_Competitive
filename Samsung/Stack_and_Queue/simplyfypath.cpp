#include <bits/stdc++.h>
using namespace std;

string simp(string A){
    if ( A.size() == 0 ){
        return A;
    }
    if ( A.size() == 1 ){
        return "/";
    }
    int n = A.size();
    stack<char> sol;
    for ( int i=n-2 ; i>=0 ; i-- ){
        if ( A[i] != '/'){
            sol.push(A[i]);
            cout << sol.top() << " ";
        }
        else {
            break;
        }
    }
    string res;
    for ( int i=0 ; i<sol.size() ; i++ ){
        char s = sol.top();
        sol.pop();
        res.push_back(s);
    }
    return "/"+res;
}

int main(){
    string A = "/home/dir/";
    string ans;
    ans = simp(A);
    cout << ans << endl;
    return 0;
}