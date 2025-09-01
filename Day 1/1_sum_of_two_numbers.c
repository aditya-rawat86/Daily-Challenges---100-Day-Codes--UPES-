/*Write a program to input two numbers and display their sum.*/
#include <stdio.h>
    int main()
{
    float num1,num2,sum;
    printf("Enter first number = ");
    scanf("%f",&num1);
    printf("Enter second number = ");
    scanf("%f",&num2);
    
    sum=num1+num2;
    printf("The sum of two number = %.2f",sum);
   
    return 0;
}