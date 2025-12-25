#include <stdio.h>
#include <stdlib.h>
int isprime(int n){
    if(n == 1)  return 1;
    if(n % n-1 == 0)
}
void primefactors(int n, int *arr){
    if(n == 1)  return;
    else{
        if(n % n-1 == 0)
            if(isprime(n-1))
                *arr = n-1, arr++;
        return prime(n-1, arr);
    }
    
}
void main(){
    int n = 2409;
    int *arr = (int*)calloc(100, sizeof(int));
    prime(n, arr);
    for(int i=0; i<100; i++)
        printf("%d ", arr[i]);
}