/*Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>
int main()
{
    int num1,num2,i,j;
    printf("Enter size for 1D array = ");
    scanf("%d",&num1);

    int arr1[num1];
    for(i=0;i<num1;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter size for 1D array = ");
    scanf("%d",&num2);

    int arr2[num2];
    for(j=0;j<num2;j++)
    {
        scanf("%d",&arr2[j]);
    }
    for(i=0;i<num1;i++)
    {
        printf("%d ",arr1[i]);
    }
    for(j=0;j<num2;j++)
    {
        printf("%d ",arr2[j]);
    }

    return 0;

}