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

    if(cols1 != rows2) {
        printf("Matrix multiplication not possible. Columns of first must equal rows of second.\n");
        return 0;
    }

    int matrix2[rows2][cols2];
    printf("Enter elements of the second matrix:\n");
    for(int i = 0; i < rows2; i++) {
        for(int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int product[rows1][cols2];
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols2; j++) {
            product[i][j] = 0;
            for(int k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/* Program to multiply two matrices */

