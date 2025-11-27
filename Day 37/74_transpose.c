/*Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>

int main() {
    int ROWS, COLS, I, J;
    scanf("%d %d", &ROWS, &COLS);

    int MATRIX[100][100], TRANSPOSE[100][100];

    for(I = 0; I < ROWS; I++) {
        for(J = 0; J < COLS; J++) {
            scanf("%d", &MATRIX[I][J]);
        }
    }

    for(I = 0; I < ROWS; I++) {
        for(J = 0; J < COLS; J++) {
            TRANSPOSE[J][I] = MATRIX[I][J];
        }
    }

    for(I = 0; I < COLS; I++) {
        for(J = 0; J < ROWS; J++) {
            printf("%d ", TRANSPOSE[I][J]);
        }
        printf("\n");
    }

    return 0;
}
