#include <stdio.h>
void main(){
    int a[4] = {40,10,30,20};
    printf("%d",a[0]);
    for(int i =0;i<4;i++)   printf("\n%d ",a[i]);

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}