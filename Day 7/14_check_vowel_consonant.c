/*Write a program to input a character and check whether it is a vowel or consonant
using if–else.

*/

#include <stdio.h>
    int main()
{
    printf("Enter character : ");
    char c;
    scanf("%c", &c);
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {  
    }
    else
    {
        printf("Invalid input!\n");
        return 0;
    }
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("%c is vowel",c);
    }
    else
    {
        printf("%c is consonant",c);
    }
    
    return 0;
}