// Online C compiler to run C program online
//PRINT PATTREN
#include <stdio.h>
#include <string.h>
int main() {
    printf(0+"Andy");   //print string starting from index
    char string[20] = "*****\n";
    for(int i=0; i<strlen(string);i++)
        printf(i+string);
    return 0;
}