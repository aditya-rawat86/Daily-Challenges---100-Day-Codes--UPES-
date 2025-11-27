/*Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s
*/
#include <stdio.h>

int main() {
    char Str[100];
    int k, j, found = 0;

    printf("Enter a string: ");
    fgets(Str, sizeof(Str), stdin);

    for (k = 0; Str[k] != '\0'; k++) {
        if (Str[k] == '\n')
            continue;

        for (j = k + 1; Str[j] != '\0'; j++) {
            if (Str[j] == '\n')
                continue;

            if (Str[k] == Str[j]) {
                printf("First repeating lowercase alphabet: %c\n", Str[k]);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
