/*Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main() {
    int ROWS1, COLS1, ROWS2, COLS2, I, J;

    scanf("%d %d", &ROWS1, &COLS1);

    int A[100][100], B[100][100], C[100][100];

    for(I = 0; I < ROWS1; I++) {
        for(J = 0; J < COLS1; J++) {
            scanf("%d", &A[I][J]);
        }
    }

    scanf("%d %d", &ROWS2, &COLS2);

    if(ROWS1 != ROWS2 || COLS1 != COLS2) {
        printf("Matrix dimensions must match\n");
        return 0;
    }

    for(I = 0; I < ROWS2; I++) {
        for(J = 0; J < COLS2; J++) {
            scanf("%d", &B[I][J]);
        }
    }

    for(I = 0; I < ROWS1; I++) {
        for(J = 0; J < COLS1; J++) {
            C[I][J] = A[I][J] + B[I][J];
        }
    }

    for(I = 0; I < ROWS1; I++) {
        for(J = 0; J < COLS1; J++) {
            printf("%d ", C[I][J]);
        }
        printf("\n");
    }

    return 0;
}
