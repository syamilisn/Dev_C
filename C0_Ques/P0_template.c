#include <stdio.h>
int function(){
    return 0;
}
void main(){
    // ENTER INPUT
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    //  CODE BEGINS
    
    //  CODE OUTPUT
    int ans = function();
    printf("ret ans = %d", ans);
}