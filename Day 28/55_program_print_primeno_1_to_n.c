/*Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>
int main()
{
    int num,i,j,count;
    printf("Enter the nth term = ");
    scanf("%d",&num);

    for(i=2;i<=num;i++)
    {
        count=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            printf("%d ",i);
        }
    }
  
    return 0;
}