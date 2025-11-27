/*Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int rows, cols, i, j, symmetric = 1;
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];

    if(rows != cols) {
        printf("False\n");
        return 0;
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
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
