#include <stdio.h>
int childrensDay(int n, int k, int *arr){
   int temp;
    for(int i=0; i<n; i++)
        for(int j=0; j<n-i-1; j++)
            if(arr[j] > arr[j+1])
                temp = arr[j], arr[j] = arr[j+1], arr[j+1] = temp;
                
    return arr[n-k];
}
void main(){
    // ENTER INPUT
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    //  CODE BEGINS
    int ans  = childrensDay(n, k, arr);
    printf("\nret candies = %d",ans);
}