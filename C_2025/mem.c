#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

void main(){
    int a[]={1,2,3,4,5};
    bool b = 0;
    char c = 'A';
    double d = 6.28;
    int e = 1;
    float f = 3.14;
    int8_t i8 = 8;
    uint8_t u8 = 8;

    size_t var;
    var = sizeof(a);
    printf("size: %ld Array\n", var);
    var = sizeof(b);
    printf("size: %ld Bool\n", var);
    var = sizeof(c);
    printf("size: %ld Char\n", var);
    var = sizeof(d);
    printf("size: %ld Double\n", var);
    var = sizeof(e);
    printf("size: %ld Int\n", var);
    var = sizeof(f);
    printf("size: %ld Float\n", var);
    var = sizeof(i8);
    printf("size: %ld Int 8-bit\n", var);
    var = sizeof(u8);
    printf("size: %ld Uint 8-bit\n", var);
}
