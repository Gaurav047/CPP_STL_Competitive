#include<iostream> 
using namespace std; 
  
class Base  
{ 
public: 
    int fun()      { cout << "Base::fun() called"; } 
    int fun(int i) { cout << "Base::fun(int i) called"; } 
}; 
  
class Derived: public Base  
{ 
public: 
    int fun(char x)   { cout << "Derived::fun(char ) called"; } 
}; 
  
int main()  
{ 
    Derived d; 
    d.fun(); 
    return 0; 
} 