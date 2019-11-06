// #include <stdio.h>
 
// int main()
// {
//     float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//     float *ptr1 = &arr[0];
//     float *ptr2 = ptr1 + 3;
 
//     printf("%f ", *ptr2);
//     printf("%d", ptr2 - ptr1);
 
//    return 0;
// }

// #include<stdio.h> 
// int main() 
// { 
//    int a; 
//    char *x; 
//    x = (char *) &a; 
//    a = 512; 
//    x[0] = 3; 
//    x[1] = 2; 
//    printf("%dn",a);   
//    return 0; 
// }

int main()
{
 char *ptr = "GeeksQuiz";
 printf("%s\n", *&*&*&*&ptr);
 return 0;
}