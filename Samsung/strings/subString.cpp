// A CPP program to find largest substring with same characters.

#include <bits/stdc++.h>
using namespace std;

int substring(string s){
    int ans = 1, temp=1;
    
    //Traverse the string
    for ( int i=1 ; i<=s.size() ; i++ ){
        if ( s[i] == s[i-1] ){
            ++temp;
        }
        else {
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(temp, ans);

    //Return the required answer
    return ans;
}

// Driver code 
int main() 
{ 
    string s = "abcdddddeff"; 
  
    // Length of the largest substring with contiguous same characters
    cout << substring(s); 
  
    return 0; 
} 