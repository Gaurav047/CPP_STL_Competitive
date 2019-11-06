#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    char *args[]={"./exec2", NULL};
    execv(args[0], args);

    printf("Ending------");
    return 0;
}
