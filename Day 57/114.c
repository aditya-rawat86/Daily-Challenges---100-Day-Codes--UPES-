/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, n, max = 0;

    scanf("%s", s);

    n = strlen(s);

    for (i = 0; i < n; i++) {
        int used[256] = {0};
        int count = 0;

        for (j = i; j < n; j++) {
            if (used[(unsigned char)s[j]] == 1)
                break;

            used[(unsigned char)s[j]] = 1;
            count++;
        }

        if (count > max)
            max = count;
    }

    printf("%d\n", max);

    return 0;
}
