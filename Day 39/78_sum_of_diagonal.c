/*Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int ROWS, COLS, I, J, SUM = 0;
    int MATRIX[100][100];

    scanf("%d %d", &ROWS, &COLS);

    if(ROWS != COLS) {
        printf("Not a square matrix\n");
        return 0;
    }

    for(I = 0; I < ROWS; I++) {
        for(J = 0; J < COLS; J++) {
            scanf("%d", &MATRIX[I][J]);
        }
    }

    for(I = 0; I < ROWS; I++) {
        SUM += MATRIX[I][I];
    }

    printf("%d\n", SUM);

    return 0;
}
