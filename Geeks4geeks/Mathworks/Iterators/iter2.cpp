// C++ Program to demonstrate the working of next() and prev()

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main(){
    vector<int> ar = {1, 2, 3, 4, 5, 6, 7};

    //Declaring iterators to a vector
    vector<int>::iterator it1 = ar.begin();
    vector<int>::iterator it2 = ar.end();

    //Using next() to return new iterator
    //points to 4
    auto pt1 = next(it1, 3);

    //Using prev() to return new iterator
    //points to 3
    auto pt2 = prev(it2, 3);

    //Displaying iterator position
    cout << "The position of new iterator using next() is : ";
    cout << *pt1 << " ";
    cout << endl;

    //Displaying iterator position
    cout << "The position of new iterator using prev() is : ";
    cout <<  *pt2 << " ";
    cout << endl;

    return 0;
}