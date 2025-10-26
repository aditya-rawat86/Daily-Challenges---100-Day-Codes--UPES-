/*Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>
int main()
{
    int num,i,count_positive=0,count_negative=0,count_zero=0;
    printf("Enter size for 1D array = ");
    scanf("%d",&num);

    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            count_positive++;
        }
        if(arr[i]<0)
        {
            count_negative++;
        }
        if(arr[i]==0)
        {
            count_zero++;
        }
    } 

    printf("Positive=%d, Negative=%d, Zero=%d",count_positive,count_negative,count_zero);

    return 0;
}