/*Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO
*/
#include <stdio.h>

int main() {
    char Str[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(Str, sizeof(Str), stdin);

    while (Str[j] != '\0') {
        if (Str[j] == '\n') {
            Str[j] = '\0';
            break;
        }
        j++;
    }

    j = 0;
    while (Str[j] != '\0') {
        if (Str[j] >= 'a' && Str[j] <= 'z') {
            Str[j] = Str[j] - 32;
        }
        else if (Str[j] >= 'A' && Str[j] <= 'Z') {
            Str[j] = Str[j] + 32;
        }
        j++;
    }

    printf("Toggled string: %s\n", Str);

    return 0;
}
