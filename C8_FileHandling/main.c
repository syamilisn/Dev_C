#include <stdio.h>
#include <conio.h>

void print_file(FILE *file){
    char ch;
    while(1){
        ch = fgetc(file);
        if(ch == EOF)   break;
        printf("%c", ch);
    }
}
void main(){
    FILE *file = fopen("read.txt", "r+");
    print_file(file);
    fclose(file);
}