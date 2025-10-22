/*Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>

int main() 
{
    int num,sum_divisor=0,i=1;
    printf("Enter number to check = ");
    scanf("%d",&num);
    
    if(num<0)
    {
        printf("Please Enter a positive integer to check");
        return 0;
    }
    
    while(i<num)
    {
        if(num%i==0)
        {
            sum_divisor+=i;
        }
        i++;
    }
    if(sum_divisor==num)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not Perfect ");
    }
    return 0;
}