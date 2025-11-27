/*Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int N, j, k;
    scanf("%d", &N);

    int arr[N];
    for(j = 0; j < N; j++) {
        scanf("%d", &arr[j]);
    }

    scanf("%d", &k);
    k = k % N;

    int temp[k];
    for(j = 0; j < k; j++) {
        temp[j] = arr[N - k + j];
    }

    for(j = N - 1; j >= k; j--) {
        arr[j] = arr[j - k];
    }

    for(j = 0; j < k; j++) {
        arr[j] = temp[j];
    }

    for(j = 0; j < N; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}
