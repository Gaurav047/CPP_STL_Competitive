// Some Useful string functions in C++

/***
1. compare(string_to_compare) : It is used to compare two strings.
It returns 0 if strings are equal and -1 if the strings are unequal.

***/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str("abcd");
    string str1("abcz");

    int differ = 0;
    // Compare the strings using compare()
    if ( str.compare(str1) == 0 ){
        cout << "Strings are identical."<< endl;
    }
    else {
        cout << "Strings are not identical."<<endl;
    }

    differ = str.compare(str1);
    cout << "The difference between strings is : "<< endl;
    cout << differ <<endl;
    return 0;

}