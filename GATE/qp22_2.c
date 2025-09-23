#include <stdio.h>
void main(){
    char a = 'P', b = 'x';
    printf("%c, %c, %c\n", (a&b) + '*', (a|b) - '-', (a^b) + '+');
    printf("");
}