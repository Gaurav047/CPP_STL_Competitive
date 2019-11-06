/**MULTISET
 * 1) Stores elements in sorted order.
 * 2) Elements can be repeated.
 **/

#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int > s;

    // Elements added to set 
    s.insert(12); 
    s.insert(10); 
    s.insert(2); 
    s.insert(10); // duplicate added 
    s.insert(90); 
    s.insert(85); 
    s.insert(45); 

    multiset<int>::iterator it, it1, it2;
    cout << "Multiset elements after sort : " << endl;
    for ( it = s.begin() ; it!=s.end() ; it++ ){
        cout << *it << " ";
    }
    cout << endl;
    
    it1 = s.find(10);
    it2 = s.find(90);

    s.erase(it1, it2);

    cout << "Multiset elements after erase : "<< endl;
    for ( it = s.begin() ; it!=s.end() ; it++ ){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}