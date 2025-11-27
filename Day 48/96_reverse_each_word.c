/*Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/
#include <stdio.h>

int main() {
    char Str[200];
    int I, J, start;

    printf("Enter a sentence: ");
    fgets(Str, 200, stdin);

    printf("Reversed sentence: ");

    I = 0;
    while (Str[I] != '\0' && Str[I] != '\n') {
        while (Str[I] == ' ')
            I++;

        start = I;

        while (Str[I] != ' ' && Str[I] != '\0' && Str[I] != '\n')
            I++;

        for (J = I - 1; J >= start; J--)
            printf("%c", Str[J]);

        if (Str[I] == ' ')
            printf(" ");
    }

    printf("\n");

    return 0;
}
