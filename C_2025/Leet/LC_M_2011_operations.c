#include <stdio.h>
#include <string.h>
int finalValueAfterOperations(char** a, int n) {
    int oper = 0;
    for(int i=0; i<n; i++){
        oper = (strcmp(a[i],"X++") == 0 || strcmp(a[i],"++X") == 0) ? oper + 1 : oper - 1;
    }
    return oper;
}

int main(){
    char* arr[] = {"X++","++X","--X","X--"};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = finalValueAfterOperations(arr, n);
    printf("%d\n", result); // Output the final value
}