// [Q] given an array find the number the unique number. clue: bitwise operator (XOR)
//Reason for XOR: each repeated pair cancels each other out
#include <stdio.h>

int main() {
    int arr[7] = {2,3,4,5,3,2,4};
    int num;
    for(int i=0; i<7; i++)
        num ^= arr[i];
    printf("%d", num);
    return 0;
}