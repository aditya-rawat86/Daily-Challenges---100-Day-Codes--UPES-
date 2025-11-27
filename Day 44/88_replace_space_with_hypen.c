/*Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world
*/
#include <stdio.h>

int main() {
    char Str[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(Str, sizeof(Str), stdin);

    while (Str[j] != '\0') {
        if (Str[j] == ' ') {
            Str[j] = '-';
        }
        j++;
    }

    printf("Modified string: %s\n", Str);

    return 0;
}
