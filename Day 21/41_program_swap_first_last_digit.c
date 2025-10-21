/*Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
int main()
{
    int num,temp,first,last,middle,count=0,divisor=1,swap;
    printf("Enter number to swap first and last digit = ");
    scanf("%d",&num);

    temp=num;
    last=num%10;
    while(temp>=10)
    {
        temp=temp/10;
        divisor=divisor*10;
        count++;
    }
    first=temp;
    
    if(num<10)
    {
        printf("%d",num);
        return 0;
    }
    
    middle=(num%divisor)/10;

    swap=(last*divisor)+(middle*10)+first;

    printf("%d",swap);

    return 0;

}