#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float P, r, t, A, CI;
    int n;

    printf("Enter Principal Amount: ");
    scanf("%f", &P);

    printf("Enter Rate Of Interest, annually: ");
    scanf("%f", &r);

    printf("Enter the time period, in years: ");
    scanf("%f", &t);

    A = P * (pow((1 + r/100), t)) ;
    CI = A - P;

    printf("The compound interest to be paid is %f RS.", CI);
}