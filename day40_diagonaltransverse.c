#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");
    for(int k = 0; k < rows + cols - 1; k++) {
        int i = (k < rows) ? k : rows - 1;
        int j = (k < rows) ? 0 : k - (rows - 1);

        while(i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }
    printf("\n");

    return 0;
}

/* Program to perform diagonal traversal of a matrix */
