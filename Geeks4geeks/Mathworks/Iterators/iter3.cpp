// C++ code to demonstrate the working of inserter()
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
int main(){
    vector<int> ar1 = {1, 2, 3, 4, 5};
    vector<int> ar2 = {10, 20, 30};

    //Declaring iterator to a vector
    vector<int>:: iterator ptr1 = ar1.begin();

    //Using advance to set position
    advance(ptr1, 3);

    //Copying 1 vector elements in other using inserter()
    //inserts ar2 after 3rd position in ar1
    copy(ar2.begin(), ar2.end(), inserter(ar1,ptr1));

    //Displaying new vector elements
    cout << "The new vector after inserting elements is: ";
    for (int &x : ar1)
        cout << x << " ";

    return 0;
}
