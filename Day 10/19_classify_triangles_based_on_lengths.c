/*Write a program to classify a triangle as Equilateral, Isosceles,
 or Scalene based on its side lengths.*/

#include <stdio.h>
    int main()
{
    int s1,s2,s3;
    printf("Enter three side of triangle (separated by space) =");
    scanf("%d %d %d",&s1,&s2,&s3);

    if(s1==s2 && s2==s3 && s1==s3)
    {
        printf("Equilateral\n");
    
    }
    else if(s1==s2 || s2==s3 || s1==s3)
    {
        printf("Isosceles\n");
    }
    else
    {
        printf("Scalene\n");
    }

    return 0;
}