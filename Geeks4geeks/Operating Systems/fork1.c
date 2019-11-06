#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void fork1(){
    if ( fork() == 0 ){
        printf("Hello from Child!\n");
    }
    else {
        printf("Hello from Parent!\n");
    }
}

int main(){
    fork1();
    return 0;
}