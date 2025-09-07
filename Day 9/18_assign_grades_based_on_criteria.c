/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.*/

#include <stdio.h>
    int main()
{
    float percentage;
    printf("Enter your percentage = ");
    scanf("%f",&percentage);
    
    if(percentage<0 || percentage>100)
    {
        printf("Invalid percentage!\n");
        return 0;
    }
    else if(percentage<=100 && percentage>=90)
    {
        printf("Grade A obtain for %.2f%%\n",percentage);
    }
    else if(percentage<=89 && percentage>=80)
    {
        printf("Grade B obtain for %.2f%%\n",percentage);
    }
    else if(percentage<=79 && percentage>=70)
    {
        printf("Grade C obtain for %.2f%%\n",percentage);
    }
    else if(percentage<=69 && percentage>=60)
    {
        printf("Grade D obtain for %.2f%%\n",percentage);
    }
    else
    {
        printf("Grade F obtain for %.2f%%\n",percentage);
    }
    
    return 0;
}