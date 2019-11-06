/**
An array name acts like a pointer constant.
The value of this pointer constant is the address of the first element.
For example, if we have an array named val then val and &val[0]
can be used interchangeably. 
**/

// Array name as a pointer.

#include <bits/stdc++.h>
using namespace std;

void geeks(){

    int val[3] = { 5, 10, 15};

    int *ptr;

    //Assign address of val[0] to ptr.
    //We can use ptr=&val[0];(both are same)
    ptr = val;
    cout << "Elements of the array are: "<<endl;
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2];

    return;
}

int main(){
    geeks();
    return 0;
}