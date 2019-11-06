#include <stdio.h>
#include <string.h>

// A Function to check if the given string is a palindrome or not
void isPalindrome(char str[]){
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
    while(h> l){
        if (str[l++] != str[h--]){
            printf("%s is not a palindrome",str);
            return;
        }
    }
    printf("%s is a palindrome", str);
}

int main(){
    isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("geeks");
    return 0;
}