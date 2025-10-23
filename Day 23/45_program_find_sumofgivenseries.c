/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
////I think there has been some error in the given output provided on website.

#include <stdio.h>
int main()
{
    int i,num;
    float n=2.0,d=3.0,sum=0.0;
    printf("Enter number to find n terms = ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        sum+=n/d;
        n=n+2.0;
        d=d+4.0;
    }
    printf("Approximate sum: %.2f",sum);

    return 0;
}