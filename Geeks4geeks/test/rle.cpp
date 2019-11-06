#include "rle.hpp"

using namespace std;
string run_length_encode(const string &s)
{
    vector<int > count; // prepare a count vector for the alphabets
    vector<bool > flag; // flag to check if the character is visited 
    flag.assign(300, false);
    count.assign(300,0);
    int index = 0;
    char temp;
    string ans;
    for ( int i=0 ; i<s.size() ; i++ ){
        index = s[i] - 'A' + 100;
        count[index]++;
    }
    for ( int i=0 ; i<s.size() ; i++ ){
        index = s[i] - 'A' + 100;
        if ( !flag[index] ){
            flag[index] == true;
            ans.push_back(s[i]);
            temp = count[index];
            ans.push_back(temp);
        }
    }
    return ans;
}


// string run_length_decode(const std::string&)
// {
//     // Implement!
//     return {};
// }

