#include <stdio.h>

int main(){

    int var = 10;

    int *ptr = &var;

    //This line prints value at address stored in ptr
    printf("Value of var = %d\n", *ptr);
    printf("Address of var = %p\n", ptr);

    // lvalue assignment can also be done in this case:
    *ptr = 20;

    printf("After doing *ptr = 20, *ptr is %d\n", *ptr);

    return 0;
}