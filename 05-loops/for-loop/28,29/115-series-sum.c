// WAP to print the the sum of the following series ~
// 1 - x^1 + x^4 - x^7 + x^16 + ....... + upto x^n

#include <stdio.h>
// #include<conio.h>
#include <math.h>

void main()
{
    int sum = 1, i, n, x, power;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    printf("Enter x:");
    scanf("%d", &x);

    for (i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            power = pow(2, i);
        }
        else
        {
            power = pow(2, i) - 1;
        }
        if (i % 2 == 0)
            sum += pow(x, power);
        else
            sum -= pow(x, power);
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}