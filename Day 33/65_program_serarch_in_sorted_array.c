/*Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>
int main()
{
    int num,i,element,low,high,mid,found=0;

    printf("Enter the size for the 1D array = ");
    scanf("%d", &num);

    int arr[num];
    printf("Enter %d sorted elements = ", num);
    for (i=0;i<num;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search = ");
    scanf("%d", &element);

    low=0;
    high=num-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(arr[mid]==element)
        {
            printf("Found at index %d", mid);
            found=1;
            break;
        }
        else if(arr[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    if(!found)
    {
        printf("-1");
    }

    return 0;
}
