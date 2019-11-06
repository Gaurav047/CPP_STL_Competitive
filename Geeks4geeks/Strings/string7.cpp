// CPP : Useful string functions

/***
1. find("string") : Searches the string for the occurence of the substring specified in arguments.
It returns the position of the first occurence of substring.
2. find_first_of("string") :  Searches the string for the first character that matches any of the characters specified in its arguments.
 It returns the position of the first character that matches.
3. find_last_of("string") : Searches the string for the last character that matches any of the characters specified in its arguments.
 It returns the position of the last character that matches.
4. rfind("string") : Searches the string for the last occurrence of the substring specified in arguments. 
It returns the position of the last occurrence of substring
***/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str("The Geeks for Geeks");

    // find() returns position to first
    // occurence of Substring "Geeks"
    cout << "First occurence of \"Geeks\" starts from :";
    cout << str.find("Geeks") << endl;

    //prints position of last occurence of any character
    // of "reef" 
    cout << "First occurence of any character of \"reef\" is :";
    cout << str.find_first_of("reef") << endl;

    // prints position of last occurrence of any character
    // of "reef"
    cout << "Last occurence of any character of \"reef\" is :";
    cout << str.find_last_of("reef") << endl;

    // rfind() returns position to last occurrence
    // of substring "Geeks"
    cout << "Last occurence of \"Geeks\" starts from : ";
    cout << str.rfind("Geeks") << endl;
    
    return 0;
}