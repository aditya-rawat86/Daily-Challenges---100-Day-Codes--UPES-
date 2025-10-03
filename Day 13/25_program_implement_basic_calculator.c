/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>
    int main()
{
    int num1,num2,result;
    char operator;
    printf("Enter two numbers and operator(+,-,*,/,%%)= ");
    scanf("%d %d %c",&num1,&num2,&operator);

    switch(operator)
    {
        case '+':
            result=num1+num2;
            printf("%d\n",result);
            break;
        case '-':
            result=num1-num2;
            printf("%d\n",result);
            break;
        case '*':
            result=num1*num2;
            printf("%d\n",result);
            break;
        case '/':
            if(num2==0)
            {
                printf("Division by zero error\n");
                break;
            }
            else
            {
                result=num1/num2;
                printf("%d\n",result);
            }
            break;
        case '%':
            if(num2==0)
            {
                printf("Division by zero error\n");
                break;
            }
            else
            {
                result=num1%num2;
                printf("%d\n",result);
            }
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}