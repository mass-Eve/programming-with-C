// Write a program to input the electricity units burned in a month and calculate the electricity bill according to the following instructions

    // No. Of Units Burned                            Bill Amount
        // First 100 units                      No Charge
        // Next 150 Units                       (4 Rs/per-unit) exceding 100 units
        // Next 300 Units                       (6 Rs/per-unit) exceding 250 units
        // Over 550 Units                       (12 Rs/per-unit) exceding 550 units
// Add a meter charge of 50 Rs.

#include<stdio.h>
#include<conio.h>
void main()
{
    float nunit, meter, bill;
    meter = 50;

    printf("Enter the no. of electrocity units: ");
    scanf("%f", &nunit);

    if (nunit <= 100)
    {
        bill = 0 + meter;
    }

    else if (nunit > 100 && nunit <= 250)
    {
        bill = (nunit-100)*4 + meter ;
    }

    else if (nunit > 250 && nunit <= 550)
    {
        bill = 150*4 + (nunit-250)*6 + meter ;
    }

    else
    {
        bill = 150*4 + 300*6 + (nunit-550)*12 + meter ;
    }

    printf("%f", bill);
}