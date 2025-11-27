/*Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    int second;
    for(i = 0; i < n; i++) {
        if(arr[i] != largest) {
            second = arr[i];
            break;
        }
    }
    for(i = 0; i < n; i++) {
        if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    printf("%d\n", second);
    return 0;
}