/** Sets are associative containers in which each element has to be unique.
    because the value of the element identifies it. The value of
    the element can't be modified once it is added to the set, though 
    it is possible to remove and add the modified value of that element.
**/

/**
Some basic functions included in set are:
1. begin()
2. end()
3. size()
4. max_size()
5. empty()
**/

#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <iterator>

using namespace std;

int main(){
    set <int, greater<int> > set1;

    //insert elements in random order
    set1.insert(40);
    set1.insert(30);
    set1.insert(60);
    set1.insert(20);
    set1.insert(50);
    set1.insert(50); // It will not be added
    set1.insert(10);

    //Printing all the elements of set1
    set<int, greater<int> > :: iterator it;
    cout << "\n Print the elements of the Set: "<< endl;
    for ( it = set1.begin(); it != set1.end() ; ++it){
        cout << "\t" << *it;
    }
    cout << endl;

    //assigning elements of set1 to set2
    set <int> set2(set1.begin(), set1.end());
    
    //Print all elements of set2
    cout << "\n The set2 after assigning set1 elements :"<< endl;
    set<int> :: iterator it1;
    for ( it1 = set2.begin(); it1 != set2.end(); ++it1){
        cout << '\t' << *it1;
    }
    cout << endl;

    //remove all elements up to 30 in set2
    cout << "\nset2 after removal of elements less than 30 :"<< endl;
    //int num1;
    //num1 = set2.erase(set2.begin(), set2.find(30));
    //cout << "\n Number of elements removed : "<<num1<<endl;
    set2.erase(set2.begin(), set2.find(30));
    for ( it1 = set2.begin(); it1 != set2.end() ; ++it1){
        cout << '\t' << *it1;
    }
    cout << endl;

    //remove element with value 50 in the set2
    int num;
    num = set2.erase(50);
    cout << "\nset2.erase(50) :";
    cout << num << " removed \t";
    for ( it1 = set2.begin(); it1 != set2.end() ; ++it1 ){
        cout << '\t' << *it1;
    }

    cout << endl;

    // Lower and Upper bound for set1
    cout << "set1.lower_bound(40) :"<<*set1.lower_bound(40)<<endl;
    cout << "\nset1.upper_bound(40) :"<<*set1.upper_bound(40)<<endl;

    cout << "\n Print the elements of the set1: "<< endl;
    for ( it = set1.begin(); it != set1.end() ; ++it){
        cout << "\t" << *it;
    }
    cout << endl;

    //lower and upper bound for set2
    cout << "set2.lower_bound(40)"<<*set2.lower_bound(40)<<endl;
    cout << "set2.upper_bound(40)"<<*set2.upper_bound(40)<<endl;
    
    cout << "Print the elements of set2 :"<< endl;
    for ( it1 = set2.begin(); it1 != set2.end(); ++it1){
        cout << '\t' << *it1;
    }
    cout << endl;

    return 0;
}

