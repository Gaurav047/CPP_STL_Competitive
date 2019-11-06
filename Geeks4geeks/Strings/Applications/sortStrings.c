/*** Given an array of strings in which all characters are of same case,
The idea is to use qsort() in C and write a comparison function that uses 
strcmp() to compare two strings
***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Comparator function
static int myCompare(const void* a, const void* b ){

    // Setting up rules for comparison
    return strcmp(*(const char**)a, *(const char**)b);
}

//Function to sort the array
void sort(const char* arr[], int n){
    //Calling qsort function to sort the array
    //with the help of comparator
    qsort(arr, n, sizeof(const char*), myCompare);
}

int main(){

    //Get the array of names to be sorted
    const char* arr[] = { "geeksforgeeks", "geeksquiz", "clanguage"};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;

    //Print the given names
    printf("Given array is\n");
    for ( int i=0 ; i<n ; i++ ){
        printf("%d: %s \n",i,arr[i]);
    }

    //Sort the given names
    sort(arr,n);
    printf("\nSorted array is\n");
    for ( int i=0; i<n ; i++ ){
        printf("%d: %s\n", i, arr[i]);
    }
    return 0;
}