/*
    String Functions:
    1) push_back(element) : append an element at the end of the string.
    2) pop_back(element) : remove an element from the end of the string.
    3) getline(cin, str) : read a string from the user and store it in str.
    4) capacity() : returns the total capacity allocated to a string which can be more than the size of string.
    5) resize() : This function changes the size of the string.
    6) length() : returns the length of the string.
    7) shrink_to_fit() : This function decreases the size of the string and makes it equal to its length.
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cout << "Enter the string : \n";
    cin >> s;
    cout << "The capacity of the string is : " << s.capacity() << endl;
    cout << "The length of the string is : " << s.length() << endl;
    cout << "Let's resize the string to double its current length : "<<endl;
    int currLen = s.length();
    s.resize(2*currLen);
    cout << "The new capacity of the string is :" << s.capacity() << endl;
    cout << "The new length of the string is : " << s.length() << endl;
    cout << "Now let's shrink the string to fit its original size :"<< endl;
    s.shrink_to_fit();
    cout << "The capacity is : "<< s.capacity()<< endl;
    cout << "The length is : "<< s.length() << endl;
    cout << "Finished"<<endl;

    return 0;
}