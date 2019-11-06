/*
Given scores of two teams in a football match, you had to find the count of matches where Team A scored less than or equal to every match of Team B. Return the array.
        For Ex -

        Team A = [ 2,3 ]

        Team B = [ 1, 2, 3]

        Return [ 0, 1, 2 ]
*/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int > A; // vector to store the #goals of team A
    vector<int > B; // vector to store the #goals of team B

    A = {1, 2, 3, 4, 1, 5, 3, 0};
    B = {3, 2, 1, 5};
    vector<int > ans;
    for ( int i=0 ; i<B.size() ; i++ ){
        int temp = B[i];
        int count=0;
        for ( int j=0 ; j< A.size() ; j++ ){
            if (A[j] <= temp ) {
                count++;
            } 
        }
        ans.push_back(count);
    }
    for ( int i=0 ; i<ans.size() ; i++ ){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}