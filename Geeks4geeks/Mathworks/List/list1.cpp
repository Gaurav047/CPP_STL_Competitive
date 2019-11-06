#include <iostream>
#include <list>
#include <iterator>
using namespace std;

// For the list traversal, We use the iterator .

void showlist(list <int> g){
    list <int> :: iterator it;
    for ( it = g.begin(); it != g.end(); ++i ){
        cout << '\t' << *it;
    }
    cout << "\n";
}

int main(){
    list <int> gqlistq, gqlist2;

    for ( int i=0 ; i<10 ; i++ ){
        gqlist1.push_back(i*2);
        gqlist.push_front(i*3);
    }
    cout << "\nList 1 (gqlist1) is : ";
    showlist(gqlist1);

    cout << "\nList 2 (gqlist2) is : ";
    showlist(gqlist2);

    cout << "\ngqlist1.front() : " << gqlist.front();
    cout << "\n gqlist.back() : " << gqlist.back();

    cout << "\ngqlist1.pop_front() : ";
    gqlist.pop_front();
    showlist(gqlist1);

    cout << "\ngqlist.pop_back() : ";
    gqlist2.pop_back();
    showlist(gqlist2);

    return 0;
}