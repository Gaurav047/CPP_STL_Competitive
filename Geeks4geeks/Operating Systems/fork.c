/***
Fork System Call is used in creating a new process, which is called a child process.
The Child process runs concurrently with the parent process.
A child process uses the same Program Counter, same CPU registers, same open files which use in the parent process.
***/

// It takes no parameters and returns an integer value.
//Below are different values returned by fork().

// Negative Value: creation of a child process was unsuccessful.
// Zero: Returned to the newly created child process.
// Positive value: Returned to parent or caller. The value contains process ID of newly created child process.

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    fork();

    printf("Hello World!\n");
    return 0;
}