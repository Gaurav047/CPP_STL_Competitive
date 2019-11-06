#include <stdio.h>

int main(){
    char name[30];
    printf("Enter name: ");
    //printf("%d\n",sizeof(name));
    fgets(name, sizeof(name), stdin);
    printf("Name : ");
    puts(name);
    int t = strlen(name);
    print("Length of the string is : %d\n", t);
    
    return 0;
}