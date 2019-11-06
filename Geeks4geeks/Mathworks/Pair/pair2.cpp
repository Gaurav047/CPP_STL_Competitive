// Member Functions of pair

/***
1. make_pair() : This template function allows to create
              a value pair without writing the types explicitly.
              syntax:
              Pair_name = make_pair (value1, value2);
***/

/***
2. operators(=, ==, !=, >=, <=) : 
        a) using = : It assigns new object for a pair object.
            syntax : pair& operator = (const pair& pr);

        b) using == : For any two given pairs say PAIR1 and PAIR2,
            the comparison operator
        c) Not equal != : opposite of b) part
        d) <= , >= : It only compares the first value.
***/

/***
3. swap : This function swaps the contents of one pair
    with the contents of another pair object.
    The pairs must be of same type;
    Syntax : pair1.swap(pair2);
***/

#include <bits/stdc++.h>
#include <utility>
#include <iostream>

using namespace std;

int main(){
    // pair<int, int>pair1 = make_pair(1,12);
    // pair<int, int>pair2 = make_pair(9, 12);

    pair<char, int>pair3 = make_pair('A', 1);
    pair<char, int>pair4 = make_pair('B', 2);


    // cout << (pair1 == pair2) << endl;
    // cout << (pair1 != pair2) << endl;
    // cout << (pair1 >= pair2) << endl;
    // cout << (pair1 <= pair2) << endl;
    // cout << (pair1 > pair2) << endl;
    // cout << (pair1 < pair2) << endl;

    cout << "Before Swapping:\n ";
    cout << "Contents of pair1 = " << pair3.first << " " << pair3.second;
    cout << "Contents of pair2 = " << pair4.first << " " << pair4.second;
    pair3.swap(pair4);

    cout << "\nAfter Swapping:\n";
    cout << "Contents of pair1 = " << pair3.first << " " << pair3.second;
    cout << "Contents of pair2 = " << pair4.first << " " << pair4.second;
    
    return 0;
}