// Online C compiler to run C program online
#include <stdio.h>
// typedef char string[20];
int main() {
    char A[10] = "mew", B = "mew";
    char *ptr_a = "two", *ptr_b = "two";
    // printf(0+"Andy");
    if(A==B) printf("same\n");  //CANT DIRECTLY COMPARE 2 STRINGS
    else printf("different\n");
    
    if(ptr_a == ptr_b) printf("same\n");    //BUT CAN COMPARE 2 STRINGS USING POINTERS
    else printf("different\n");
    return 0;
}