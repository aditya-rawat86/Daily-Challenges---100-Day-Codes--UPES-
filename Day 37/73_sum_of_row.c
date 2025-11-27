    /*Q73: Find the sum of each row of a matrix and store it in an array.

    Sample Test Cases:
    Input 1:
    2 3
    1 2 3
    4 5 6
    Output 1:
    6 15

    */
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];
    int rowSums[100];

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        int sum = 0;
        for(j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        rowSums[i] = sum;
    }

    for(i = 0; i < rows; i++) {
        printf("%d ", rowSums[i]);
    }

    return 0;
}
