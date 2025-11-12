#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if(rows != cols) {
        printf("Matrix must be square to check diagonal distinctness.\n");
        return 0;
    }

    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int distinct = 1;
    for(int i = 0; i < rows; i++) {
        for(int j = i + 1; j < rows; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct) break;
    }

    if(distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

/* Program to check if the elements on the diagonal of a matrix are distinct */
