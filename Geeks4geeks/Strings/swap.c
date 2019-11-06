#include <stdio.h>
void swap(char *str1, char *str2){
    char *temp = str1;
    str1 = str2;
    str2 = temp;
}

int main(){
    char str1[100], str2[200];
    printf("\nEnter the first String :");
    scanf("%s",str1);
    printf("\nEnter the Second String :");
    scanf("%s",str2);

    // Print the strings before swap
    printf("\nString 1 before swap : %s\n",str1);
    printf("\nString 2 before swap : %s\n",str2);

    //Print the strings after swap 
    swap(str1,str2);

    printf("\nString 1 after swap : %s",str1);
    printf("\nString 2 after swap : %s",str2);
    getchar(); // To clear the buffer
    return 0;
}