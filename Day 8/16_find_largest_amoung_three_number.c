/*Write a program to input three numbers and find the largest among them using if–else.*/

#include <stdio.h>
    int main()
{
    float num1,num2,num3;
    printf("Enter three numbers separated by spaces = ");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    if(num1>=num2 && num1>=num3)
    {
        printf("%.2f is largest\n",num1);
    }
    else if(num2>=num1 && num2>=num3)
    {
        printf("%.2f is largest\n",num2);
    }
    else
    {
        printf("%.2f is largest\n",num3);
    }
    
    return 0;
}