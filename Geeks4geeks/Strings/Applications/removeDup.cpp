// O(n^2) : Remove Duplicate characters from a string

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char *removeDup( char *str, int n){

    //Used as index in the modified string
    int index = 0;

    //Traverse through all characters
    for ( int i=0 ; i<n ; i++ ){
        //check if str[i] is present before it
        int j;
        for ( j=0 ; j<i ; j++ ){
            if (str[i] == str[j] ){
                break;
            }
        }
        if ( j == i ){
            str[index++] = str[i];
        }
    }

    return str;
}

int main(){
    char str[] = "geeksforgeeks";
    int n = sizeof(str)/sizeof(str[0]);
    cout << removeDup(str,n);

    return 0;
}