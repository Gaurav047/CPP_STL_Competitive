#include <stdio.h>
#include <unistd.h>

int main(){

    // A NULL terminated array of character pointers
    char *args[] = {"./exec1", NULL};
    execvp(args[0],args);

    /*
    All statements are ignored after execvp()
    call as process(execDemo.c) is replaced
    by another process.
    */
    printf("Ending------");
    return 0;
}