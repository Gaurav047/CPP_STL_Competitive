// Time Complexity : O(nlogn) Using Hashing

#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256
#define bool int

// Function removes duplicate characters from the string.
// This works in place and fills null characters in the extra space left.

char *removeDups(char str[]){
    bool bin_hash[NO_OF_CHARS] ={0};
    int ip_ind=0, res_ind = 0;
    char temp;

    //In place removal of duplicate characters
    while(*(str+ip_ind)){
        temp = *(str+ip_ind);
        if ( bin_hash[temp] == 0){
            bin_hash[temp] = 1;
            *(str + res_ind) = *(str + ip_ind);
            res_ind++;
        }
        ip_ind++;
    }
    // Add the sentinal
    *(str+res_ind) = '\0';
    return str;
}

//Driver Code
int main(){
    char str[] = "geeksforgeeks";
    cout << removeDups(str);
    return 0;
}