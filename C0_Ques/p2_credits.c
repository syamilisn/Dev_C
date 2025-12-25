#include <stdio.h>
int credits(int k, int n, int *arrk, int *arrn){
    int count = 0;
    for(int i=0; i<k; i++)
        for(int j=0; j<n; j++)
            if(arrk[i] < arrn[j])
                count++;
    return count;   
}
void main(){
    // ENTER INPUT
    int k, n;   
    printf("Enter K: ");
    scanf("%d", &k);
    
    int arr_subjCred[k];  
    printf("Enter K array: ");
    for(int i=0; i<k; i++)
        scanf("%d", &arr_subjCred[i]);
    
    printf("Enter N: ");    
    scanf("%d", &n);    
    
    int arr_studCred[n];    
    printf("Enter N array: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr_studCred[i]);
    //  CODE BEGINS
    int ans = credits(k, n, arr_subjCred, arr_studCred);
    printf("ret count = %d", ans);
}