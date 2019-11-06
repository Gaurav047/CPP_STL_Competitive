// Dynamic Programming C++ implementation of LIS problem.

#include <bits/stdc++.h>
using namespace std;

int lis(int arr[], int n){
    int lis[n];
    lis[0] = 1;

    // compute optimized LIS values in bottom up manner
    for ( int i=1 ; i<n ; i++ ){
        lis[i] = 1;
        for ( int j=0 ; j<i ; j++ ){
            if ( arr[i] > arr[j] && lis[i] < lis[j]+1 ){
                lis[i] = lis[j] +1;
            }
        }
    }
    return *max_element(lis, lis+n);
}

int main(){
    int arr[] = {10, 22, 9, 33, 43, 76, 23, 123, 100, 98, 89, 102, 21, 50, 41, 60};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Length of LIS is : " << lis(arr,n);
    return 0;
}


//Reimplementation

// int lis( int arr[], int n){
//     int lis[n];
//     int lis[0] = 1;

//     for ( int i=1 ; i<n ; i++ ){
//         lis[i] = 1;
//         for ( int j=0 ; j<i ; j++ ){
//             if( arr[i] > arr[j] && lis[i] < lis[j]+1 ){
//                 lis[i] = lis[j] + 1;
//             }
//         }
//     }
//     return *max_element(lis, lis+n);
// }