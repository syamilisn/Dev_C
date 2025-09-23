// Online C compiler to run C program online
#include <stdio.h>

void main() {
   int n = 10;
   int arr[n];
   int a= 0, b = 1;
   for(int i=0; i<n; i++){
       arr[i] = a+b, a = b, b = arr[i]; //STORES FIBONACCI SERIES
   }
   for(int i=0; i<n;i++)
    printf("%d ", arr[i]);
}