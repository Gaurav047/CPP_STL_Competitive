//Demonstartion of pass by value and pass by reference

// Pass by Value

#include <stdio.h>

void value(int x){
    x = 20;
}

void reference(int * x){
    *x = 10;
}

int main(){
    int y = 30;
    value(y);
    printf("Value of y doesn't change even after passing it through value() : %d", y);
    reference(&y);
    printf("\nValue of y changes after it is passed by reference: %d", y);
    return 0;
}