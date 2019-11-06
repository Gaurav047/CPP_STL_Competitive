/***
We can declare strings in c++ which are dynamic in size and 
whose size can be decided at the runtime.

***/

#include <iostream>
#include <string>
using namespace std;

int main(){

    // Declaring a string

    string str;

    //Taking a string input using getline();
    getline(cin, str);

    cout << "The initial string is :";
    cout << str << endl;

    //Using push_back() to insert a character at the end
    str.push_back('s');

    cout << "\nThe string after push_back() operation is :";
    cout << str << endl;

    //Using pop_back() to delete a character from the end
    str.pop_back();

    //Display string 
    cout << "The string after pop_back() operation is :";
    cout << str << endl;

    return 0;
}