/*Write a program to find the roots of a quadratic equation and categorize them.
*/

#include <stdio.h>
#include <math.h>
    int main()
{
    float a,b,c,root1,root2,realPart,imgPart,discriminant;
    printf("Enter coefficients a, b and c of quadratic equation separated by spaces = ");
    scanf("%f %f %f",&a,&b,&c);
    
    discriminant = b*b - 4*a*c;
    
    if(discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n",root1);
        printf("Root 2 = %.2f\n",root2);
    }
    else if(discriminant == 0)
    {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2f\n",root1);
    }
    else
    {
        realPart = -b / (2*a);
        imgPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imgPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imgPart);
    }
    
    return 0;
}
