// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char str[100000];
    scanf("%s", str);
    char temp[100];
    int n = strlen(str);
    int count = 0;
    int index1, index2;
    sprint(str);
    ///
    do{
        sprint(str);
        sprint(temp);
        strcpy(temp, str);
        for(int i=0; i<n-1; i++){
            index1 = i;
            index2 = i+1;
            if(str[i] == '*')
                continue;
            if(str[i+1] == '*'){
                int j = i+1;
                while(str[j] == '*')
                    if(j < n)
                        j++;
                index2 = j;
            }
            if(str[index1] == str[index2]){
                str[index1] = '*', str[index2] = '*', count++;
            }
        }
    }while(strcmp(temp, str) != 0);
    printf("ret count = %d", count);
    return 0;
}