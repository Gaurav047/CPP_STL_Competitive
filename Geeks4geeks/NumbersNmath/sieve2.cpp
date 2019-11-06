#include <iostream>
#include <bits/stdc++.h>


//Program to generate all prime numbers less than N in O(n)
using namespace std;
const long long MAX_SIZE = 1000001;

// isPrime[] : isPrime[i] is true if i prime
// prime[] : stores all prime number less than N
// SPF[] : stores smallest prime factor of number 

vector<long long > isPrime(MAX_SIZE, true);
vector<long long > prime;
vector<long long > SPF(MAX_SIZE);

void altSieve( int N ){
    // 0 and 1 are not prime
    isPrime[0] = isPrime[1] = false;

    //Fill rest of the entries
    for ( long long int i=2 ; i<N ; i++ ){
        // If isPrime[i] == true then i is a prime number
        if ( isPrime[i] ){
            prime.push_back(i);
            
            // Smallest prime factor of a prime number is itself
            SPF[i] = i;
        }

        //Remove all multiples of i*prime[j] which are not prime and 
        // put smallest prime factor of i*prime[j] = j
        for ( long long int j=0 ; j < (int)prime.size() && prime[j] <= SPF[i] ; j++ ){
            isPrime[i*prime[j]] = false;
            // Assign SPF
            SPF[i*prime[j]] = prime[j];            
        }
    }
}

int main(){
    int N = 15;

    altSieve(N);
    for ( int i=0 ; i<prime.size() && prime[i] <= N ; i++ ){
        cout << prime[i] << " ";
    }
    return 0;
}