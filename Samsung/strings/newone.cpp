#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord( string A) {
    int n = A.size();
    int count=0;
    bool flag=false;
    for ( int i=n-1 ; i>=0 ; i-- ){
        if ( A[i] == ' ' && !flag ){
            continue;
        }
        else {
            flag = true;
            if ( A[i] == ' ' ){
                return count;
            }
            count++;
        }
    }
}

int main(){
    string s = "Hello world   ";
    cout << lengthOfLastWord(s) << endl;
}