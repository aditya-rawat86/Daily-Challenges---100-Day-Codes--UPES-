/*Write a program to convert temperature from Celsius to Fahrenheit.*/

#include <stdio.h>
    int main()
{
    float celsius,fahrenheit;
    printf("Enter temperature in celsius = ");
    scanf("%f",&celsius);

    fahrenheit=((9.0/5.0)*celsius)+32;
    printf("Temperature in fahreheit = %.2f",fahrenheit);

    return 0;
}