/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

//I think there has been some error in the formula for the n terems series as it does not matches the output correctly

#include <stdio.h>
int main()
{
    int i,num;
    float n=3.0,d=4.0,sum=1.0;

    printf("Enter number of terms= ");
    scanf("%d",&num);

    for (i=2;i<=num;i++)
    {
        sum+=n/d;
        n+=2;
        d+=2;
    }
    printf("Approximate sum= %.1f", sum);
    return 0;
}