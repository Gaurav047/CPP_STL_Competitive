// 1. sort the elements 
// 2. Now in a loop remove all the duplicates by comparing with previous element.
// 3. Remove extra characters at the end of the resultant string.
// 4. Time Complexity : O(nlogn)
// 5. Auxilliary Space : O(n)

#include <bits/stdc++.h>
using namespace std;

char *removeDup3( char *str){
    int res_ind = 1, ip_ind = 1;

    // In place removal of duplicate characters
    while(*(str +ip_ind)){
        if ( *(str+ip_ind) != *(str+ip_ind -1)){
            *(str+res_ind) = *(str + ip_ind);
            res_ind++;
        }
        ip_ind++;
    }
    // Remove extra chars after string
    *(str+res_ind) = '\0';
    return str;
}

//Sort the String
char *removeDups(char *str){

    int n = strlen(str);

    sort(str, str+n);
    
    return removeDup3(str);
}

//Driver Program to test removeDups

int main(){
    char str[] = "geeksforgeeks";
    cout << removeDups(str);
    return 0;
}
