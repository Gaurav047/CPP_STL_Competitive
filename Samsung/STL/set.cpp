/**
 * SETS
 * 1) Stores the values in sorted order.
 * 2) Stores only unique values
 * 3) Elements can only be inserted or deleted but cannot be modified.
 * 4) We can erase and traverse using start and end iterators.
 * 5) Sets are implemented using BST (Binary Search Trees)
 * **/

#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int > s;

    s.insert(12);
    s.insert(10);
    s.insert(2);
    s.insert(10);
    s.insert(19);
    s.insert(88);
    s.insert(45);

    set<int>::iterator it, it1, it2;
    cout << "Set elements after sort and removing duplicates: "<< endl;
    for ( it = s.begin() ; it!=s.end() ; it++ ){
        cout << *it << " ";
    }
    cout << endl;

    it1 = s.find(10);
    it2 = s.find(88);

    s.erase(it1, ++it2); // erasing elements from 10 to 88;
    cout << "Elements after erase operation on set : "<< endl;
    for ( it = s.begin() ; it !=s.end() ; it++ ){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}