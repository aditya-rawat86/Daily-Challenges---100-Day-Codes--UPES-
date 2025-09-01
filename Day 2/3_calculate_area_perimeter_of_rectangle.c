/*Write a program to calculate the area and perimeter of a rectangle given
 its length and breadth.
*/

#include <stdio.h>
    int main()
{
    float Length,Breadth,Area,Perimeter;
    printf("Enter length of rectangle = ");
    scanf("%f",&Length);
    printf("Enter breadth of rectangle = ");
    scanf("%f",&Breadth);

    Area=Length*Breadth;
    Perimeter=2*(Length+Breadth);
    printf("Area of rectangle = %.2f\n",Area);
    printf("Perimeter of rectangle = %.2f",Perimeter);

    return 0;
}