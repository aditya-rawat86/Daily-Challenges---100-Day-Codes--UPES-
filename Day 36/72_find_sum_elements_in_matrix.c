/*Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main() {
    int Rows, Cols, I, J, sum = 0;
    scanf("%d %d", &Rows, &Cols);

    int Matrix[100][100];

    for(I = 0; I < Rows; I++) {
        for(J = 0; J < Cols; J++) {
            scanf("%d", &Matrix[I][J]);
            sum += Matrix[I][J];
        }
    }

    printf("%d\n", sum);
    return 0;
}
