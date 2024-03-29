#include <stdio.h>
#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[][COLS], int rows, int cols);
void printMatrix(int matrix[][COLS], int rows, int cols);
void addMatrix(int (matrix1)[][COLS], int (matrix2)[][COLS] , int rows, int cols);
void mulMatrix(int (matrix1)[][COLS], int (matrix2)[][COLS] , int rows, int cols);
void transposeMatrix(int (matrix1)[][COLS], int rows, int cols);


int main()
{
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS];
    int i, j;
    printf("MATRIX 1\n");
    /* Input elements in matrix 1*/
    printf("Enter elements in %dx%d matrix.\n", ROWS, COLS);
    inputMatrix(matrix1, ROWS, COLS);


    /* Print elements in matrix 1*/
    printf("Elements of %dx%d matrix.\n", ROWS, COLS);
    printMatrix(matrix1, ROWS, COLS);

    printf("MATRIX 2\n");
    /* Input elements in matrix 2*/
    printf("Enter elements in %dx%d matrix.\n", ROWS, COLS);
    inputMatrix(matrix2, ROWS, COLS);


    /* Print elements in matrix 2*/
    printf("Elements of %dx%d matrix.\n", ROWS, COLS);
    printMatrix(matrix2, ROWS, COLS);

    /* Matrix Addition*/
    addMatrix(matrix1,matrix2,ROWS, COLS);

    /* Matrix Multiplication*/
    mulMatrix(matrix1,matrix2,ROWS, COLS);

    /* Transpose of a Matrix*/
    transposeMatrix(matrix1,ROWS,COLS);
    return 0;
}

void inputMatrix(int matrix[][COLS], int rows, int cols)
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", (*(matrix + i) + j));
        }
    }
}
void printMatrix(int (*matrix)[COLS], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

void addMatrix(int (matrix1)[][COLS], int (matrix2)[][COLS] , int rows, int cols){
    int i, j, matrixSum[ROWS][COLS];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            matrixSum[i][j] = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);
        }
        printf("\n");
    }
    printMatrix(matrixSum,rows,cols);
}

void mulMatrix(int (matrix1)[][COLS], int (matrix2)[][COLS] , int rows, int cols){
    int i, j, k, matrixMul[ROWS][COLS];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            matrixMul[i][j] = 0;
            for(k = 0; k < cols; k++)
                matrixMul[i][j] += (*(*(matrix1 + i) + k)) * (*(*(matrix2 + k) + j));
        }
        printf("\n");
    }
    printMatrix(matrixMul,rows,cols);
}


void transposeMatrix(int (matrix1)[][COLS] , int rows, int cols){
    int i, j, transpose[ROWS][COLS];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            transpose[j][i] = *(*(matrix1 + i) + j);
        }
        printf("\n");
    }
    printMatrix(transpose,rows,cols);
}