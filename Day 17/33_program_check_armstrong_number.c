/*Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
int main()
{
    int num,rem,temp,count=0,sum=0,original;
    printf("Enter number to check armstrong = ");
    scanf("%d",&num);
    original=num;
    temp=num;
    while(original!=0)
    {
        original/=10;
        count++;
    }
    while(temp!=0)
    {
        rem=temp%10;
        int power=1;
        for(int i=0;i<count;i++)
        {
            power*=rem;
        }
        sum=sum+power;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not armstrong");
    }

    return 0;
    
}