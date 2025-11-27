/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/
#include <stdio.h>

int main() {
    char Str[200], longest[50], word[50];
    int x = 0, j, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(Str, 200, stdin);

    while (Str[x] != '\0' && Str[x] != '\n') {
        j = 0;

        while (Str[x] != ' ' && Str[x] != '\0' && Str[x] != '\n')
            word[j++] = Str[x++];

        word[j] = '\0';

        if (j > maxLen) {
            maxLen = j;
            int k;
            for (k = 0; k <= j; k++)
                longest[k] = word[k];
        }

        if (Str[x] == ' ')
            x++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
