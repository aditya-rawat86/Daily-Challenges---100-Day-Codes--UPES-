/*Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/
#include <stdio.h>

int main() {
    char name[100];
    int I;

    printf("Enter your full name: ");
    fgets(name, 100, stdin);

    if (name[0] != ' ') {
        printf("%c.", name[0]);
    }

    for (I = 0; name[I] != '\0'; I++) {
        if (name[I] == ' ') {
            if (name[I + 1] != ' ' && name[I + 1] != '\0' && name[I + 1] != '\n') {
                printf("%c.", name[I + 1]);
            }
        }
    }

    printf("\n");
    return 0;
}
