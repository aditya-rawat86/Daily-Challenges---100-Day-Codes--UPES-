/*Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/


#include <stdio.h>
int main()
{
    int num,i,element,found=0;
    printf("Enter the size for the 1D array = ");
    scanf("%d",&num);

    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);     
    }
    scanf("%d",&element);
    for(i=0;i<num;i++)
    {
        if(arr[i]==element)
        {
            printf("Found at index %d",i);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("-1");
    }

    return 0;
}