/*Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>
int main()
{
    int num,temp,fact,strong=0,digit;
    printf("Enter number to check strong number = ");
    scanf("%d",&num);

    temp=num;
    
    while(temp>0)
    {
        digit=temp%10;
        fact=1;
        for(int i=1;i<=digit;i++)
        {
            fact*=i;
        }
        strong+=fact;
        temp/=10;
    }
    if(strong==num)
    {
        printf("Strong Number");
    }
    else{
        printf("Not Strong Number");
    }

    return 0;
}