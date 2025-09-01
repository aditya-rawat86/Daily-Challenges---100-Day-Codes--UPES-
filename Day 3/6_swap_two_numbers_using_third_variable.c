/*Write a program to swap two numbers using a third variable.*/

#include <stdio.h>
    int main()
{
    float num1,num2,temp;  //temp=temporarily
    printf("Enter first number = ");
    scanf("%f",&num1);
    printf("Enter second number = ");
    scanf("%f",&num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("After swapping = %.2f, %.2f",num1, num2);

    return 0;
}