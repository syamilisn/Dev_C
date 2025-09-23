// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n = 121,d, num =0 , temp = n;
    while(n>0){
        d = n%10;
        n = n/10;
        num = num*10 + d;
    }
    printf("n = %d; num = %d", temp, num);
    return 0;
}