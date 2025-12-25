#include <stdio.h>
void print(int row, int col, char arr[][col]){
    printf("Display array:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col;j++){
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
}

char compare(char a, char b){
    if(a == b){
        // if(a == 'X')
            // return 'X';
        // else
            return a;
 }
 if(a == 'R' && b == 'P' || a == 'P' && b == 'R')
 return 'P';
 if(a == 'R' && b == 'S' || a == 'S' && b == 'R')
 return 'R';
 if(a == 'P' && b == 'S' || a == 'S' && b == 'P')
 return 'S';
 if(a == 'X'&& b != 'X')
 return b;
 if(b == 'X'&& a != 'X')
 return a;
}

void game(int row, int col, char arr[][col]){
    char ans[row][col];
    char temp, right = 'X', down = 'X', left = 'X', top = 'X';
    // char temp, right, down, left, top;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            temp = arr[i][j];
            if(j+1 < col)
                right = compare(temp, arr[i][j+1]);
            if(i+1 < row){
                if(right == 'X')
                    down = compare(temp, arr[i+1][j]);
                else
                    down = compare(right, arr[i+1][j]);
            }
            if(j-1 >= 0){
                if(down == 'X')
                    left = compare(temp, arr[i][j-1]);
                else
                    left = compare(down, arr[i][j-1]);
            }
            if(i-1 >= 0){
                if(left == 'X')
                    top = compare(temp, arr[i-1][j]);
                else
                    top = compare(left, arr[i-1][j]);
            }
            arr[i][j] = top;
        }
    }
    print(row, col, arr);//print array
}
void main(){
    int row, col, n;
    scanf("%d%d%d", &row, &col, &n);
    char arr[row][col];
    // char ans[row][col];
    for(int i=0; i<row; i++)
        scanf("%s", arr[i]);
    // print(row, col, arr);   //print array
    while(n>0){
        game(row, col, arr);
        n--;
    }
}