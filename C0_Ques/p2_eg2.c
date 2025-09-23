// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int k = 8;
    int arrk[8] = {44, 45, 56, 39, 2, 6, 17, 75};
    int n = 1;
    int arrn[1] = {54};
    int count = 0;
    for(int i=0; i<k; i++)
        for(int j=0; j<n; j++)
            if(arrk[i] < arrn[j])
                count++;
    printf("ret count = %d", count);
    return 0;
}