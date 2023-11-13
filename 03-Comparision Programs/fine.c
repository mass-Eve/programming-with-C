// Write a program to calculate the library fine applicable according to the following rules -

//      Delay  In  Submission  (Days)                Fine 
//       first 5 days of delaying                   1 Rs/day
//       Next 10 days of delaying                   3 Rs/day
//       Next 15 days of delaying                   6 Rs/day
//       More than 40 days of delaying              10 Rs/day

#include<stdio.h>
#include<conio.h>
void main()
{
    float ndays, fine;
    fine = 0.0;

    printf("Enter the number of days -:");
    scanf("%f", &ndays);

    if (ndays <= 5)
    {
        fine = ndays*1;
    }
    else if (ndays > 5 && ndays <=15)
    {
        fine = 5 + (ndays-5)*3;
    }
    else if (ndays > 15 && ndays <= 40)
    {
        fine = 5 + 30 + (ndays-15)*6;
    }
    else
    {
        fine = 5*1 + 10*3 + 25*6 + (ndays-40)*10;
    }

    printf("%f", fine);
}