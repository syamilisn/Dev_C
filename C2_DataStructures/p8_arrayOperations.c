#include <stdio.h>
int i, j, temp;
void print_list(int n, int *ptr_arr);
void reverse_list(int n, int *ptr_arr);
int swap(int a, int b);
void main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    //int arr[6] = {1,2,3,4,5,6};
    printf("Array before reversal:\n");
    print_list(n, arr);
    int i, j, temp;
    //for(i=0, j=n-1; i+1 != j+1; i++, j--)
      //  temp = arr[i], arr[i] = arr[j], arr[j] = temp;
    printf("Array after reversal:\n");
    //print_list(n, arr);
    reverse_list(n, arr);
}

void print_list(int n, int *ptr_arr){
    for(int i=0; i<n; i++)
        printf("%d ", ptr_arr[i]);
    printf("\n");
}
int swap(int a, int b){
    int temp;
    temp = a, a = b, b = temp;
    return a,b;
}
void reverse_list(int n, int *ptr_arr){
    int condition = (n%2 == 0)? n/2: (n+1)/2;
    for(i=0; i<condition ;i++ )
        ptr_arr[i], ptr_arr[n-i-1] = swap(ptr_arr[i], ptr_arr[n-i-1]);
    print_list(n, ptr_arr);
}