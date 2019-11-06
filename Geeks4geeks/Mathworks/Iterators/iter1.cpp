// C++ Code for begin and end functions of the iterator.

#include <iostream>
#include <iterator> // for iterators
#include <vector>   // for vectors
using namespace std;
int main(){
    vector <int> ar = {1, 2, 3, 4, 5, 6};

    //Declaring iterator to a vector
    vector <int>::iterator ptr = ar.begin(); //*** IMPORTANT To MUG UP

    //Using advance() function to increment iterator position
    // points to 4
    advance(ptr, 3);

    //Displaying iterator position
    cout << "The position of iterator after advancing is : ";
    cout << *ptr << " ";

    // Displaying vector elements using begin() and end()
    // cout << "The vector elements are : ";
    // for ( ptr = ar.begin(); ptr < ar.end(); ptr++ ){
    //     cout << *ptr << " "; 
    // } 

    return 0;
}