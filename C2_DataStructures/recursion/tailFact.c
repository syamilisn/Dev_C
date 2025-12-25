#include <stdio.h>

int fact(int n, int a){
    if(n <= 1)  return a;
    a *= n;
    return fact(n-1, a);
}
void main(){
    int n = 4, a = 1;
    printf("%d", fact(n, a));
}