/*Q30: Write a program to reverse a given number.


Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>
    int main()
{
    int num,reverse=0,remainder;
    printf("Enter a number = ");
    scanf("%d",&num);

    for(;num!=0;num=num/10)
    {
        remainder=num%10;
        reverse=reverse*10+remainder;
    }
    printf("%d\n",reverse);

    return 0;
}