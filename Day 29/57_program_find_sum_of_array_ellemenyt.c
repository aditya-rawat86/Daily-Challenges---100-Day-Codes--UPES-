/*Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:   
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the size for the 1D array = ");
    scanf("%d",&num);

    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        sum+=arr[i];
    }

    printf("%d",sum);
   
    return 0;
}