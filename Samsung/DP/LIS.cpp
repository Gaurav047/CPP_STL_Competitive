// Optimal Substructure of a LIS problem:

/**
 * Let arr[0...n-1] be the input array and L(i) be
 * the length of the LIS ending at index i such that 
 * arr[i] is the last element of LIS.
 * Then we can write L(i) as:
 * L(i) = 1+max(L(j)) where 0<j<i and arr[j] < arr[i] ;
 * L(i) = 1, if no such j exists.
 * To find the LIS for a given array, we need to return max(L(i)) where 0<i<n.
 * Thus, the LIS problem satisfies the optimal substructure property.
 * **/

// A recursive and memoryless solution will look like:

#include <bits/stdc++.h>
using namespace std;

int _lis(int arr[], int n, int *max_ref){
    //Base case
    if ( n==1 )
        return 1;
    
    // 'max_ending_here' is length of LIS ending with arr[n-1]
    int res, max_ending_here = 1;

    //Recursively get the value of LIS 
    for ( int i=1 ; i<n ; i++ ){
        res = _lis(arr, i, max_ref);
        if ( arr[i-1] < arr[n-1] && res+1 > max_ending_here)
            max_ending_here = res+1;
    }

    //compare max_ending_here with the overall max
    if ( *max_ref < max_ending_here ){
        *max_ref = max_ending_here;
    }
    return max_ending_here;
}

int lis(int arr[], int n){
    int max = 1;
    _lis(arr, n , &max);
    return max;
}


int main(){
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Length of LIS is : " << lis(arr, n) << endl;
    return 0;
}