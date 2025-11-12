#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if(rows != cols) {
        printf("Matrix is not symmetric (must be square).\n");
        return 0;
    }

    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int symmetric = 1;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if(!symmetric) break;
    }

    if(symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

/* Program to check if a matrix is symmetric */
