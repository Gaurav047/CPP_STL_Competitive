#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//C++ program for memoization

#define NIL -1
#define MAX 100

int lookup[100];

void initialize(){
    for ( int i=0 ; i<100 ; i++ ){
        lookup[i] = NIL;
    }
}

//function for nth fibonacci number calculation
int fib( int n ){
    if (lookup[n] == NIL ){
        if (n <= 1)
            lookup[n] = n;
        else {
            lookup[n] = fib(n-1) + fib(n-2);
        }
    }
    return lookup[n];
}


//Driver Code
int main(){
    int n=40;
    initialize();
    cout << "Fibonacci number of 40 is :" << fib(n);
    return 0;
}