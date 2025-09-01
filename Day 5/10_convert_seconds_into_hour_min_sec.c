/*Write a program to input time in seconds and convert it to hours:minutes:seconds format*/

#include <stdio.h>
    int main()
{
    int input_second,hours,minutes,seconds,remaining_seconds;
    printf("Enter time in second to convert = ");
    scanf("%d",&input_second);

    // Calculate hours
    hours=input_second/3600;
    // Remaining seconds after removing hours
    remaining_seconds=input_second%3600;
    // Calculate minutes
    minutes=remaining_seconds/60;
    // Remaining seconds after removing minutes
    seconds=remaining_seconds%60;

    printf("Total seconds converted into HOURS:MINUTES:SECONDS is \n");
    printf(" %d : %d : %d \n",hours,minutes,seconds);
    
    return 0;
}