#include <stdio.h>
#include <stdbool.h>

bool oneDigit(int n){
    return ( n>=0 && n < 10);
}

bool isPalUtil(int Num, int* dupNum){
    //Base Case
    if ( oneDigit(Num) ){
        return (Num == (*dupNum)%10 );
    }

    if ( !isPalUtil(Num/10, dupNum))
        return false;

    *dupNum /=10;

    return ( Num%10 == (*dupNum)%10);
}
