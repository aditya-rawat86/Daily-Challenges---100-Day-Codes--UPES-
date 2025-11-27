/*Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome
*/
#include <stdio.h>

int main() {
    char Str[100];
    int j, Len = 0, flag = 0;

    printf("Enter a string: ");
    fgets(Str, sizeof(Str), stdin);

    while (Str[Len] != '\0' && Str[Len] != '\n') {
        Len++;
    }

    for (j = 0; j < Len / 2; j++) {
        if (Str[j] != Str[Len - j - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
