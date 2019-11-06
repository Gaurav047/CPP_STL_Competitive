#include <bits/stdc++.h>

using namespace std;

void sieve( int n){
    // Create a boolean array and initialise all
    // n elements as true. A value in prime[i] will
    // finally be false if i is not a prime.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for( int p=2 ; p*p <= n ; p++ ){
        //if prime[p] is not changed then it is a prime.
        if (prime[p] == true){
            for ( int i=p*p; i<=n; i+=p){
                prime[i] = false;
            }
        }
    }

    //Print the prime numbers
    for ( int p=2; p<=n; p++){
        if (prime[p]){
            cout << p <<" ";
        }
    }
}

int main(){
    int n=30;
    cout << "Following are the prime numbers smaller than or equal to "<< n << endl;
    sieve(n);
    return 0;
}