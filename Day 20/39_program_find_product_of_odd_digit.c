/*Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>
int main()
{
    int num,rem,pro=1,hasodd=0;
    printf("Enter number = ");
    scanf("%d",&num);

    while(num>0)
    {
        rem=num%10;
        if(rem%2!=0)
        {
            pro=pro*rem;
            hasodd=1;
        }
        num=num/10;
    }
    if(hasodd==0)
    {
        pro=1;
    }
    
    printf("%d",pro);
    
}