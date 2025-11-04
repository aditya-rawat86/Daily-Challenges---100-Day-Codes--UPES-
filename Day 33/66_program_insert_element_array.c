/*Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/


#include <stdio.h>
int main()
{
    int n,i,x,pos;
    printf("Enter number of elements = ");
    scanf("%d",&n);
    int arr[50];
    printf("Enter %d sorted elements = ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to insert = ");
    scanf("%d",&x);
    for(pos=0;pos<n;pos++)
    {
        if(x<arr[pos])
            break;
    }
    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=x;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
