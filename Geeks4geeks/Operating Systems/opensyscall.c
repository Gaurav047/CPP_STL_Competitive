#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>

extern int errno;

int main(){
    // If file doesn't exist then create file foo.txt.
    int fd = open("foo.txt", O_RDONLY | O_CREAT);

    printf("fd = %d\n", fd);

    if ( fd == -1 ){
        // Print the type of error in the code
        printf("Error Numer %d\n", errno);
        // Print program detail "Success or Failure"
        perror("Program");
    }
    return 0;
}