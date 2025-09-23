#include <stdio.h>
#define ROW 3
#define COL 3
void main(){
    int i ,j;
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    for(i=0; i< ROW; ++i){
        for(j=0; j< COL; ++j)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    int *ptr_row = arr;
    int *ptr_col = ptr_row;
    int **ptr_mat = arr;
    
    for(i=0; i< ROW; i++){
        for(j=0; j< COL; j++)
            if(i==0)
                printf("%d ", *((*(ptr_row)+ptr_col)+j));
            else
                printf("%d ", *((*(ptr_row+i)+ptr_col)+j));
        ++ptr_row;
        printf("\n");
    }
}