// Online C compiler to run C program online
#include <stdio.h>
int fibo(int n){
    if (n==0)   return 0;
    else if (n==1)   return 1;
    else return fibo(n-2) + fibo(n-1);
}
int main() {
    // Write C code here
    int n = 10;
    for(int i=0; i<n; i++)
        printf("%d ", fibo(i));

    return 0;
}