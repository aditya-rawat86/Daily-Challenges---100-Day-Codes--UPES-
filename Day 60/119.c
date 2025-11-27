/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums = [1,3,3,4]
Output 1:
3

Input 2:
nums = [1,2,2]
Output 2:
2

Input 3:
nums = [0,4,1,1,5]
Output 3:
1
*/
#include <stdio.h>

int main() {
    int n, nums[100], seen[100] = {0};
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);

        if (seen[nums[i]] == 1) {
            printf("%d\n", nums[i]);
            return 0;
        }

        seen[nums[i]] = 1;
    }

    printf("No repeated element found\n");
    return 0;
}
