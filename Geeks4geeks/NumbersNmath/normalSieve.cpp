
long long int MAX_SIZE = 1000001;

vector<bool > isPrime(MAX_SIZE,true);
vector<long long int > prime;


void normalSieve( int N ){
    for ( int p=2 ; p*p<N ; p++ ){
        if ( isPrime[p] ){
            prime.push_back(p);
        }
        for ( int i=p*p ; i<N ; i+=p ){
            prime[i] = false;
        }
    }
}

