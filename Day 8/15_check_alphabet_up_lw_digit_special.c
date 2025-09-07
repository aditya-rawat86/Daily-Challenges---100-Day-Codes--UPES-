/*Write a program to input a character and check whether it is an uppercase alphabet,
lowercase alphabet, digit, or special character.
*/

#include <stdio.h>
    int main()
{
    char character;
    printf("Enter character = ");
    scanf("%c",&character);
    
    if(character>='A' && character<='Z')
    {
        printf("%c is an uppercase alphabet\n",character);
    }
    else if(character>='a' && character<='z')
    {
        printf("%c is a lowercase alphabet\n",character);
    }
    else if(character>='0' && character<='9')
    {
        printf("%c is a digit\n",character);
    }
    else
    {
        printf("%c is a special character\n",character);
    }
    
    return 0;
}