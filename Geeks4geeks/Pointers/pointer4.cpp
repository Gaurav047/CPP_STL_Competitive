/**
A limited set of arithematic operations can be performed on pointers.
A pointer may be:
 * incremented ( ++ )
 * decremented ( -- )
 * an integer may be added to a pointer ( + or += )
 * an integer may be subtracted from a pointer ( - or -= )
**/


#include <bits/stdc++.h>

int main(){

    int v[3] = {10, 100, 200};

    int *ptr;

    ptr = v;

    for ( int i=0 ; i< 3 ; i++ ){
        printf("Value of *ptr = %d\n", *ptr);
        printf("Value of ptr = %ptr\n\n", ptr);

        //Increment pointer ptr by 1
        ptr++;
    }

    return 0;
}