//Write a program to perform matrix multiplication.



#include <stdio.h>

#define SIZE 3 // Define the size of the matrices

void matrixMultiplication(int mat1[][SIZE], int mat2[][SIZE], int result[][SIZE]) {
    int i, j, k;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (k = 0; k < SIZE; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][SIZE]) {
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[SIZE][SIZE] = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    int mat2[SIZE][SIZE] = {{9, 8, 7},
                            {6, 5, 4},
                            {3, 2, 1}};
    int result[SIZE][SIZE];

    printf("Matrix 1:\n");
    displayMatrix(mat1);
    printf("\nMatrix 2:\n");
    displayMatrix(mat2);

    matrixMultiplication(mat1, mat2, result);

    printf("\nResult of matrix multiplication:\n");
    displayMatrix(result);

    return 0;
}
