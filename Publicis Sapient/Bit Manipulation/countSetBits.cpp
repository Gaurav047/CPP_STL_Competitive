// An efficient program to find out number of set bits in a number
#include <iostream>

using namespace std;


// //simple method (-)logn theta logn is the time complexity.
// // loop through all the bits in an integer, check if a bit is set and
// // increment the set bit count.

// unsigned int countSetBits(unsigned int n){
//     unsigned int count=0;
//     while(n){
//         count += n&1; // increments the value of count by 1 if the LSB of n is 1. 
//         n>>=1; // n = n>>1; right shift the number.
//     }
//     return count;
// }

// //Driver Code
// int main(){
//     int i=9;
//     int j=10;
//     int k = i&1;
//     j = j>>1; // right shift divides the integer by 2.
//     cout << countSetBits(i) <<" " << j << " "<< k << endl;
//     return 0;
// }



// Recursive Solution , time complexity = theta(n);

// int countSetBits(int n){
//     //base case
//     if ( n == 0){
//         return 0;
//     }
//     else {
//         //if last bit is set add 1 else add 0.
//         return ( n&1) + countSetBits(n>>1);
//     }
// }

// int main(){
//     int n = 9;
//     int m = 12;
//     cout << countSetBits(n) <<" "<< countSetBits(m) << endl;

//     return 0;
// }



//Brian Kernighan's Algorithm
//O(logn) , n = number

// class ssol{
//     public:
//         unsigned int countSetBits(int n){
//             unsigned int count = 0;
//             while(n){
//                 n &= (n-1);
//                 count++;
//             }
//             return count;
//         }
// };

// int main(){
//     ssol s;
//     unsigned int i=9;
//     unsigned int j = i& (i-1);
//     cout << s.countSetBits(i)<< " "<< j << endl;
//     return 0;
// }



// Usinf Lookup table :
// We can count number of bits in O(1) using lookup table.

// int main(){
//     cout << __builtin_popcount(4) << endl;
//     cout << __builtin_popcount(15) << endl;
//     return 0;
// }



// Mapping numbers with the bit.
// It simply maintains a Map (or array ) of numbers 
// to bits for a nibble. A Nibble contains 4 bits. So we need an
// array up to 15 bits. O(1)
// int num_to_bits[16] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};

//Recursively get nibble of a given number and map them in the array.
// unsigned int countSetBits(unsigned int num){
//     int nibble = 0;
//     if( 0 == num ){
//         return num_to_bits[0];
//     }

//     //Find last nibble
//     nibble = num & 0xf;

//     // Use pre-stored values to find count in last nibble plus
//     // recursively add remaining nibbles.
//     return num_to_bits[nibble] + countSetBits(num >> 4);
// }

// int main(){
//     int num = 31;
//     cout << countSetBits(num) << endl;
//     return 0;
// }