// Online C compiler to run C program online
#include <stdio.h>
struct student{
    int roll;
    char *name; //pointer better than string for both in-program and dynamic input
};
int main() {
    // Write C code here
    struct student stud1, stud2;
    stud1.roll = 1;
    stud1.name = "Niharika";
    stud2.roll = 2;
    stud2.name = "Bhanu Prakash";
    printf("Roll: %d, Name: %s\n", stud1.roll, stud1.name);
    printf("Roll: %d, Name: %s\n", stud2.roll, stud2.name);
    return 0;
}