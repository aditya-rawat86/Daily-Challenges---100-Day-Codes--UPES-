/*Write a program to calculate the area and circumference of a circle given its radius.*/

#include <stdio.h>
    int main()
{
    float radius,area,circumference,PI=3.14159;
    printf("Enter radius of the circle = ");
    scanf("%f",&radius);

    area=PI*radius*radius;
    circumference=2*PI*radius;

    printf("Area of circle = %.2f\n",area);
    printf("Circumference of circle = %.2f",circumference);

    return 0;
}