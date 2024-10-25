//  Write a program to find out the Max number from given Matrix.
#include<stdio.h>
int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int max;
    printf("Enter the elements of the %dx%d matrix:\n", rows, cols);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    max= matrix[0][0];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    printf("The maximum number is: %d\n", max);

    return 0;
}
