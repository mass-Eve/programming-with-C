// Write a program to input amount of purchase made and calculate the discount applicable on the shopping according to the following instructions.

    // Amount Of Purchase                  Discount % (on total purchase amount) 
        // < 10000 Rs                          10% 
        // 10000 - 50000 Rs                    15%
        // 50000 - 100000 Rs                   25%
        // > 100000 Rs                         50%

#include<stdio.h>
#include<conio.h>
void main()
{
    float amt, discount, net;

    printf("Enter the purchase amount: ");
    scanf("%f", &amt);

    if (amt > 0 && amt <= 10000)
    {
        discount = (amt * 10) / 100 ;
    }
    else if (amt > 10000 && amt <= 50000)
    {
        discount = (amt * 15) / 100 ;
    }
    else if (amt > 50000 && amt <= 100000)
    {
        discount = (amt * 25) / 100 ;
    }
    else if (amt > 100000)
    {
        discount = (amt * 50) / 100 ;
    }
    else {
        printf("Check your inputs!\n");
    }
    net = amt - discount;
    printf("Billed Amount: %f\n", amt);
    printf("Discount Amount: %f\n", discount);
    printf("Net Amount to be paid: %f\n", net);
}
