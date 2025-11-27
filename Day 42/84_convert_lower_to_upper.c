/*Q84: Convert a lowercase string to uppercase without using built-in functions.

Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

int main() {
    char Str[100];
    int I = 0;

    fgets(Str, sizeof(Str), stdin);

    while(Str[I] != '\0' && Str[I] != '\n') {
        if(Str[I] >= 'a' && Str[I] <= 'z') {
            Str[I] = Str[I] - 32;
        }
        I++;
    }

    printf("%s\n", Str);
    return 0;
}
