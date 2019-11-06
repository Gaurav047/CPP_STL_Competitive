// CPP program to count 
// subarrays having sum 
// less than k. 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find number 
// of subarrays having sum 
// less than k. 
vector<int> countSubarray(int arr[], 
                  int n, int k) 
{ 
    vector<int > count;
    int incount=0;
    for (int i = 0; i < n; i++) { 
        int sum = 0; 
        incount = 0;
        for (int j = i; j < n; j++) { 
  
            // If sum is less than k 
            // then update sum and 
            // increment count 
            if (sum + arr[j] < k) { 
                sum = arr[j] + sum; 
                incount++; 
            } 
            else { 
                break; 
            } 
        }
        count.push_back(incount);
    } 
  
    return count; 
} 
  
// Driver Code 
int main() 
{ 
    int array[] = { 1, 2, 3, 4, 5}; 
    int k = 6; 
    int size = sizeof(array) / sizeof(array[0]); 
    vector<int > count = countSubarray(array, size, k); 
    for ( int i=0 ; i<count.size() ; i++ ){
        cout << count[i]+1 << " ";
    }
} 