// No. of times Hello is printed == 2^n 
// Where n is the number of fork system calls.
// So, here n = 3, 2^3 = 8

#include <stdio.h>
#include <sys/types.h>

int main(){
    fork();
    fork();
    fork();
    printf("Hello\n");

    return 0;
}