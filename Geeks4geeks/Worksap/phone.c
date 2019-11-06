#include <stdio.h>
#include <string.h>

const char hash[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

void printsWordUtil ( int number[], int curr_digit , char out[], int n){
    int i;
    if ( curr_digit = n ){
        printf("%s ", out);
        return;
    }
    for ( int i=0 ; i<strlen(hash[number[curr_digit]]) ; i++ ){
        out[curr_digit] = hash[number[curr_digit]][i];
        printsWordUtil(num,curr_digit+1,out, n);
        if ( i == 0 || i== 1){
            return;
        }
    }
}

void printword( int num[], int n){
    char result[];
    result[n] = '\0';
    printsWordUtil(num,0,result,n);
}