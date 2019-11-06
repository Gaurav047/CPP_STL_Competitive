// insert(pos_to_begin, string_to_insert) function of string

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str("Geeksfor");

    //Printing the original string
    cout << str << endl;

    //Inserting "Geeks" at 8th index position
    str.insert(8,"Geeks");

    //Printing the modified string
    //Prints "GeeksforGeeks"

    cout << str << endl;


    return 0;
}