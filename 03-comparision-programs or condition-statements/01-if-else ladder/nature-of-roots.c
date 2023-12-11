// Write a program to find the nature of roots of a quadratic equation.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter the coefficient of x^2, a: ");
    scanf("%d", &a);
    printf("Enter the coefficient of x, b: ");
    scanf("%d", &b);
    printf("Enter the value of constant, c: ");
    scanf("%d", &c);

    if ((b*b - 4*a*c) > 0)
    {
        printf("The quadratic equation has real and distinct roots.");
    }
    else if ((b*b - 4*a*c) == 0)
    {
        printf("The quadratic equation has real and equal roots.");
    }
    else{
        printf("The quadratic equation has imaginary roots.");
    }
}