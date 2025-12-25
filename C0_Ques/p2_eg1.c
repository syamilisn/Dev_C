// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int k = 1;
    int arrk[1] = {48};
    int n = 3;
    int arrn[3] = {26,32,63};
    int count = 0;
    for(int i=0; i<k; i++)
        for(int j=0; j<n; j++)
            if(arrk[i] < arrn[j])
                count++;
    printf("ret count = %d", count);
    return 0;
}