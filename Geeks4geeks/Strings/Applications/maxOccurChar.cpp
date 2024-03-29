// We will use hashing to solve this problem

#include <iostream>
#include <bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;

char getMaxOccuringChar(char* str){
    // Create array to keep the count of individual
    // characters and initialise the array as 0
    int count[ASCII_SIZE] = {0};

    //Construct character count array from the input string
    int len = strlen(str);
    int max = 0; // Initialise max count
    char result; // Initialise result

    //Traversing through the string and manipulating 
    // the count of each character
    for ( int i=0 ; i<len ; i++ ){
        count[str[i]]++;
        if ( max < count[str[i]]){
            max = count[str[i]];
            result = str[i];
        }
    } 
    return result;
}

int main(){
    char str[] = "sample string";
    cout << "Max occuring character is " << getMaxOccuringChar(str);
    
}