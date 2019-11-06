// CPP program to demonstrate insert and  
// delete in unordered_multiset 
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    // unordered_multiset declare 
    unordered_multiset<int> s; 
  
    // Elements added to set 
    s.insert(12); 
    s.insert(10); 
    s.insert(2); 
    s.insert(10); // duplicate added 
    s.insert(90); 
    s.insert(85); 
    s.insert(45); 
  
    // Iterator declared to traverse 
    // set elements 
    unordered_multiset<int>::iterator it, it1; 
    cout << "Unordered-Multiset elements after sort:\n"; 
    for (it = s.begin(); it != s.end(); it++) 
        cout << *it << ' ';     
    cout << '\n'; 
  
    it1 = s.find(10); 
  
    // element 10 trained 
    s.erase(it1); 
  
    cout << "Unordered-Multiset Elements after "
            "erase:\n"; 
    for (it = s.begin(); it != s.end(); it++)  
        cout << *it << ' '; 
      
    return 0; 
} 