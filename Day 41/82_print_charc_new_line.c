/*Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>

int main() {
    char Str[100];
    int i = 0;

    fgets(Str, sizeof(Str), stdin);

    while(Str[i] != '\0' && Str[i] != '\n') {
        printf("%c\n", Str[i]);
        i++;
    }

    return 0;
}
