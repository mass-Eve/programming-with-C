// Write a program to input the monthly income of an employee and calculate the income tax to be paid yearly based on the following table of instructions - 

//      Yearly Income               Tax to be paid
//        < 200000 Rs                   0 Rs
//      200000 - 500000 Rs              10% of income exceeding 2L
//      500000 - 1000000 Rs             20% of income exceeding 5L + 30000
//        > 1000000 Rs                  30% of income exceesing 10L + 130000
// Also If the final tax amount comes out to be more than 50000 Rs, add 2% of the the income tax calculated just now in the aine income tax.
// ==> if income-tax > 50000 ==> income-tax = income-tax + (2% of income-tax)


#include<stdio.h>
#include<conio.h>
void main()
{
    float income, tax;
    printf("Enter your monthly income: ");
    scanf("%f", &income);
    income = income*12;

    if (income > 0 && income <= 200000)
    {
        tax = 0;
    }
    else if (income > 200000 && income <= 500000)
    {
        tax = ((income-200000)*10)/100 ;
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 30000 + ((income-500000)*20)/100 ;
    }
    else if (income > 1000000)
    {
        tax = 130000 + ((income-1000000)*30)/100 ;
    }
    else{
        printf("Check your inputs!");
    }
    if (tax > 50000)
    {
        tax = tax + (tax * 2)/100 ;
    }
    printf("The income tax to be paid is: Rs. %f.", tax);
}