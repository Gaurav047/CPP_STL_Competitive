#include <bits/stdc++.h>

using namespace std;

int romanchar( char c ){
    if ( c == 'I' ){
        return 1;
    }
    if ( c == 'V' ){
        return 5;
    }
    if ( c == 'X' ){
        return 10;
    }
    if ( c == 'L' ){
        return 50;
    }
    if ( c == 'C' ){
        return 100;
    }
    if ( c == 'D' ){
        return 500;
    }
    if ( c == 'M' ){
        return 1000;
    }
}


int main(){
    string s;
    cout << "Enter the Roman Numeral : " << endl;
    cin >> s;
    int ans=0;
    int n = s.size();
    for ( int i=0 ; i<n ; i++ ){
        int s1 = romanchar(s[i]);
        if ( i+1 < s.length()){
            int s2 = romanchar(s[i+1]);
            // Value of current symbol is >= next symbol
            if ( s1 >= s2 ){
                ans += s1;
            }
            // Value of current symbol is < next symbol
            else {
                ans += s2 - s1;
                i++;
            }
        }
        else {
            ans += s1;
        }
    }
    cout << "The resultant roman to integer is : " << endl;
    cout << ans << endl;
    return 0;
}