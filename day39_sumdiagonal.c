#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if(rows != cols) {
        printf("Matrix must be square to calculate main diagonal sum.\n");
        return 0;
    }

    int matrix[rows][cols];
    int sum = 0;

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if(i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}

/* Program to find the sum of main diagonal elements for a square matrix */
