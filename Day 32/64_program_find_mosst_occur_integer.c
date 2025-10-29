/*Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>
int main()
{
    int num,i,count[10]={0},digit;
    printf("Enter the integer = ");
    scanf("%d",&num);

    while(num>0)
    {
        digit=num%10;
        count[digit]++;
        num/=10;
    }

    int max=count[0],most_digit=0;
    for(int i=1;i<10;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            most_digit=i;
        }
    }
    printf("%d",most_digit);

    return 0;
    
}