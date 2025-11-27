/*Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/
#include <stdio.h>

int main() {
    char Name[100];
    int i, lastSpace = -1, len = 0;

    printf("Enter your full name: ");
    fgets(Name, 100, stdin);

    for (i = 0; Name[i] != '\0'; i++) {
        if (Name[i] == '\n') {
            Name[i] = '\0';
            break;
        }
    }

    for (len = 0; Name[len] != '\0'; len++);

    while (len > 0 && Name[len - 1] == ' ') {
        Name[len - 1] = '\0';
        len--;
    }

    lastSpace = -1;
    for (i = 0; Name[i] != '\0'; i++) {
        if (Name[i] == ' ') {
            lastSpace = i;
        }
    }

    if (Name[0] != ' ') {
        printf("%c.", Name[0]);
    }

    for (i = 0; Name[i] != '\0'; i++) {
        if (Name[i] == ' ' && i != lastSpace) {
            if (Name[i + 1] != ' ' && Name[i + 1] != '\0') {
                printf("%c.", Name[i + 1]);
            }
        }
    }

    if (lastSpace != -1) {
        printf(" ");
        for (i = lastSpace + 1; Name[i] != '\0'; i++) {
            printf("%c", Name[i]);
        }
    }

    printf("\n");
    return 0;
}
