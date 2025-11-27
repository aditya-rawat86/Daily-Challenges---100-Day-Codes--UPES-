/*Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 3 4 5

*/
#include <stdio.h>
int main()
{
    int N, I, Pos;
    scanf("%d", &N);
    int Arr[100];
    for(I = 0; I < N; I++) {
        scanf("%d", &Arr[I]);
    }
    scanf("%d", &Pos);
    for(I = Pos; I < N; I++) {
        Arr[I - 1] = Arr[I];
    }
    N--;
    for(I = 0; I < N; I++) {
        printf("%d ", Arr[I]);
    }
    printf("\n");   
    return 0;
}