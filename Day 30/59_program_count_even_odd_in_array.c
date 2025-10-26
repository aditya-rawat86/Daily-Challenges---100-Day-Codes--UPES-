/*Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>
int main()
{
    int num,i,count_even=0,count_odd=0;
    printf("Enter size for 1D array = ");
    scanf("%d",&num);

    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            count_even++;
        }
        else if(arr[i]%2!=0)
        {
            count_odd++;
        }
    }

    printf("Even=%d, Odd=%d",count_even,count_odd);

    return 0;
}