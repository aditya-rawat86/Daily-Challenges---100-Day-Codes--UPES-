/*Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j, len = 0, isRotation = 0;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') str1[i] = '\0';
    }
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') str2[i] = '\0';
    }

    for (len = 0; str1[len] != '\0'; len++);

    for (i = 0; str2[i] != '\0'; i++);
    if (i != len) {
        printf("Not rotation\n");
        return 0;
    }

    for (i = 0; i < len; i++) {
        isRotation = 1;
        for (j = 0; j < len; j++) {
            if (str1[j] != str2[(i + j) % len]) {
                isRotation = 0;
                break;
            }
        }
        if (isRotation) break;
    }

    if (isRotation)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
