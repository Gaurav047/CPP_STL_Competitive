//Sorting a Vector composed of Strings in C++

#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    vector<string> v;
    string temp;
    cout << "\nEnter 10 strings in the vector v:"<< endl;
    for ( int i=0 ; i<10 ; i++ ){
        getline(cin,temp);
        v.push_back(temp);
    }
    cout << "\nThe strings before sorting :" << endl;
    for ( int i=0 ; i<10 ; i++ ){
        cout << v[i] << endl;
    }
    
    cout << "\nThe strings after sorting :" << endl;
    sort(v.begin(),v.end());
    for ( int i=0 ; i<10 ; i++ ){
        cout << v[i] << endl;
    }

    return 0;
}