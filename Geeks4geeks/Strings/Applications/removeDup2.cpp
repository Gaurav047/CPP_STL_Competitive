// Method 2 : Use BST
// Use set in C++ STL which implements a self balancing BST.
// Time Complexity O(nlogn)
// auxilliary space : O(n)


#include <bits/stdc++.h>
using namespace std;

char* removeDup2(char str[], int n){
    // Create a set using string characters
    //excluding '\0'
    set<char> s (str, str+n-1);

    //print content of the set
    int i=0 ;
    for ( auto x : s){
        str[i++] = x;
    }
    str[i] = '\0';
    return str;
}

int main(){
    char str[] = "geeksforgeeks";
    int n = sizeof(str)/sizeof(str[0]);
    cout << removeDup2(str,n);

    return 0;
}