        /*Q40: Write a program to find the 1’s complement of a binary number and print it.

        Sample Test Cases:
        Input 1:
        1010
        Output 1:
        0101

        Input 2:
        1111
        Output 2:
        0000

        */

        #include <stdio.h>
        int main()
        {
            int num,rem,comp=0,place=1;
            printf("Enter binary number to find it's 1's complement = ");
            scanf("%d",&num);

            while(num>0)
            {
                rem=num%10;
                if(rem==0)
                {
                    rem=1;   
                }
                else
                {
                    rem=0;
                }
                comp=comp+rem*place;
                place=place*10;
                num=num/10;
            }
            printf("%d",comp);

            return 0;
        }