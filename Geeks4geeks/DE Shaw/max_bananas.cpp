#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

// Solving the banana problem from geeks of geeks blog : https://www.geeksforgeeks.org/de-shaw-on-campus-interview-experience-qa-engineer/

int logic( vector <int> A , vector <int> B , vector <int> C , int N , int k){
    int score=0;
    int currMax=0;
    int currState = 0; // 0 = A, 1 = B, 2 = C
    for ( int i=0 ; i<N ; i++ ){
        currMax = max( A[i], B[i] );
        currMax = max( currMax, C[i] );
        if ( currMax == A[i] ){
            currState = 0;
        }
        else if ( currMax == B[i] ){
            currState = 1;
        }
        else if ( currMax == C[i] ){
            currState = 2;
        }
        if 

    }

    return score
}

int main(){

    //Taking Input and declaring required variables.

    vector <int> A,B,C;
    int val;
    int N,k; // N = Number of floors, k = Number of allowed jumps
    int maxScore = 0;
    cout << "Enter the Value of N and k: " << endl;
    cin >> N;
    cin >> k;
    cout << "Enter the vector A for" << N << "values." << endl;
    for ( int i=0 ; i<N ; i++ ){    //Filling up the vector A.
        cin >> val;
        A.push_back(val);
    }
    cout << "Enter the vector B for" << N << "values." << endl;
    for ( int i=0 ; i<N ; i++ ){    //Filling up the vector B.
        cin >> val;
        B.push_back(val);
    }
    cout << "Enter the vector C for" << N << "values." << endl;
    for ( int i=0 ; i<N ; i++ ){    //Filling up the vector C.
        cin >> val;
        C.push_back(val);
    }

    // Logic : start with the max one and check adjacent values to reach the top.
    maxScore = score(A,B,C,N,k);

    cout << "Possible Maximum Score is : " << maxScore << endl;


    return 0;
}