#include <iostream>
using namespace std;

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
 
// Calculating the Euler Totient Function

int Totient( int n ){
    int result = 1;
    for ( int i=2 ; i<=n ; i++ ){
        if ( gcd(i,n) == 1 ){
            result+=1;
        }
    }
    return result;
}

// Driver code:

int main(){
    int T;
    cin >> T;
    while (T--){
        int N;
        cin >> N;
        for ( int i=1 ; i<N+1 ; i++ ){
            cout << Totient(i) << " ";
        }
        cout <<endl;
    }
}