/*Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int ROWS, COLS, I, J;
    int MATRIX[100][100];

    scanf("%d %d", &ROWS, &COLS);

    for(I = 0; I < ROWS; I++) {
        for(J = 0; J < COLS; J++) {
            scanf("%d", &MATRIX[I][J]);
        }
    }

    for(int START = 0; START < COLS; START++) {
        I = 0;
        J = START;
        while(I < ROWS && J >= 0) {
            printf("%d ", MATRIX[I][J]);
            I++;
            J--;
        }
    }

    for(int START = 1; START < ROWS; START++) {
        I = START;
        J = COLS - 1;
        while(I < ROWS && J >= 0) {
            printf("%d ", MATRIX[I][J]);
            I++;
            J--;
        }
    }

    return 0;
}
