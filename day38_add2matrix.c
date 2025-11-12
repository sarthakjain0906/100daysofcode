#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    int matrix1[rows1][cols1];
    printf("Enter elements of the first matrix:\n");
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if(rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible. Dimensions must match.\n");
        return 0;
    }

    int matrix2[rows2][cols2];
    printf("Enter elements of the second matrix:\n");
    for(int i = 0; i < rows2; i++) {
        for(int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int sum[rows1][cols1];
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/* Program to add two matrices */
