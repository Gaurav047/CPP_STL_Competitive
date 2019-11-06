// remove duplicate characters using unordered map in STL C++
// O(n) : Time Complexity
// O(1) : Auxilliary Space
// Access time in unordered map is O(1), generally if no collision
// occur and therefore it helps us check if an element exists
// in a string in O(1) time complexity with constant space.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char *removeDup(char *s, int n){
    unordered_map<char,int> exists;
    int index=0;
    for ( int i=0; i<n ; i++ ){
        if ( exists[s[i]] == 0){
            s[index++] = s[i];
            exists[s[i]]++;
        }
    }
    return s;
}

// Driver code
int main(){
    char s[] = "geeksforgeeks";
    int n = sizeof(s)/sizeof(s[0]);
    cout << removeDup(s,n) << endl;
    return 0;
}