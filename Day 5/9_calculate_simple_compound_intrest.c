    /*Write a program to calculate simple and compound interest for given 
    principal, rate, and time.*/

    #include <stdio.h>
        int main()
    {
        float principal,rate,time,simple_intrest,compound_intrest; 
        
        printf("Enter principal = ");
        scanf("%f",&principal);
        printf("Enter rate = ");
        scanf("%f",&rate);
        printf("Enter time(in years) = ");
        scanf("%f",&time);

        simple_intrest=principal*rate*time/100;
        float compound_amt=principal;
        for(int i=1;i<=time;i++)
        {
            compound_amt=compound_amt*(1+rate/100);
        }
        compound_intrest=compound_amt-principal;

        printf("Simple Intrest = %.2f\n",simple_intrest);
        printf("Compound intrest = %.2f\n",compound_intrest);

        return 0;
    }