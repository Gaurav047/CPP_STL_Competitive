#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main(){

    map<int, int > mp1;

    // insert elements in random order.
    mp1.insert(pair<int, int > (1,40));
    mp1.insert(pair<int, int > (2,40));
    mp1.insert(pair<int, int > (3,40));
    mp1.insert(pair<int, int > (4,40));
    mp1.insert(pair<int, int > (5,40));
    mp1.insert(pair<int, int > (6,40));
    mp1.insert(pair<int, int > (7,40));
    mp1.insert(pair<int, int > (8,40));
    mp1.insert(pair<int, int > (9,40));
    mp1.insert(pair<int, int > (10,40));
    mp1.insert(pair<int, int > (11,40));

    // printing map 
    map<int, int>::iterator itr;
    cout << "\n The map mp1 is : \n";
    cout << "\t KEY \t ELEMENT \n";
    for ( itr = mp1.begin() ; itr != mp1.end() ; itr++ ){
        cout << "\t" << itr->first;
        cout << "\t" << itr->second;
        cout << endl;
    }
    cout << endl;


    return 0;
}