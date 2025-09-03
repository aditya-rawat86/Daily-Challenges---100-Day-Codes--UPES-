/*Write a program to input an integer and check whether it is even or odd using if–else.*/

#include <stdio.h>
    int main()
{
    int num;
    printf("Enter number to check = ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("%d is Even\n",num);
    }
    else
    {
        printf("%d is Odd\n",num);
    }

    return 0;
}