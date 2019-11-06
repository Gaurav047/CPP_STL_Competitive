#include <stdio.h>

int main(){

    int x = 10;

    int *ptr;

    ptr = &x;

    printf("%p", &ptr); // prints the address of pointer variable ptr.
    printf("\n%d", *ptr); // prints the value to which ptr points i.e. value of x.
    printf("\n%p", ptr); // prints the address of variable x.


    return 0;
}