/*Write a program to input two numbers and display their sum, difference,
 product, and quotient.

*/

#include <stdio.h>
    int main()
{
    float num1,num2,sum,diff,pro,quo;
    printf("Enter first number = ");
    scanf("%f",&num1);
    printf("Enter second number = ");
    scanf("%f",&num2);
    
    sum=num1+num2;
    diff=num1-num2;
    pro=num1*num2;
    
    printf("The sum of two numbers = %.2f\n",sum);
    printf("The difference of two numbers = %.2f\n",diff);
    printf("The product of two numbers = %.2f\n",pro);
    
    if(num2!=0)
    {
        quo=num1/num2;
        printf("The quotient of two numbers = %.2f",quo);
    }
    else{
        printf("Division is not possible for the number(As the denominator is zero)");
    }

    return 0;
}