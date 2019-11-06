/***
C++ code to demonstrate the working of
 begin(), end(),
rbegin() and rend() 
These class functions when coupled with the iterator and
reverse iterator, can be used to print the string in 
forward and reverse manner.
***/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;

    cout << "Enter the string: "<<endl;
    cin >> str;

    //Declare a iterator to traverse the string
    string::iterator it;
    string::reverse_iterator rit;

    //Displaying the string
    cout << "The string using the forward iterator is : ";
    for ( it=str.begin(); it!=str.end(); ++it){
        cout << *it;
    }
    cout << endl;

    //Displaying the string
    cout << "The string using the reverse iterator is : ";
    for ( rit=str.rbegin(); rit!=str.rend(); ++rit){
        cout << *rit;
    }
    cout << endl;

    return 0;
}