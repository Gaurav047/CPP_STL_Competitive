/**
1. clear() and empty() functions in string CPP.
**/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str("GeeksforGeeks");

    cout << "Check if the string str is empty before applying clear() function."<< endl;

    (str.empty() == 1)?
        cout << "String is Empty."<< endl:
        cout << "String is not Empty." << endl;
    //Clearing string
    str.clear();

    cout << "Check if the string str is empty after applying clear() function."<< endl;

    //Checking if string is empty
    (str.empty() == 1)?
        cout << "String is Empty."<< endl:
        cout << "String is not Empty." << endl;
    return 0;
}