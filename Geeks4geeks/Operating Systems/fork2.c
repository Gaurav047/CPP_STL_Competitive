#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void fork2(){
    int x =1;
    if ( fork() == 0 ){
        printf("Child has x = %d\n", ++x);
    }
    else {
        printf("Parent has x = %d\n", --x);
    }
}

int main(){
    fork2();
    return 0;
}