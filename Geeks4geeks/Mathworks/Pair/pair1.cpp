// Pair is a simple container defined in <utility> header consisting of two data elements or objects.
// Pair provides a way to store two heterogenous objects as a single unit.
// The array of objects allocated in a map or hash_map are of type 'pair' by default in which first elements are unique keys associated with their second value objects.

// Syntax :
// pair (data_type1, data_type2 ) PAIR_NAME;
// initialise :
// pair (data_type1, data_type2 ) PAIR_NAME (value1, value2);

#include <bits/stdc++.h>
#include <utility>

using namespace std;

int main(){
    pair <int, char> PAIR1;

    PAIR1.first = 100;
    PAIR1.second = 'G';
    
    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl; 

    return 0;
}