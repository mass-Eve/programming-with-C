#include<stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

void main ()
{
    int num;
    printf("Enter the number whose factorial you want to calculate: ");
    scanf("%d", &num);
    printf("The factorial of %d is %d: ", num, factorial(num));
}