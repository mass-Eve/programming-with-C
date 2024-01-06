// WAP to print the the sum of the following series ~
// 1 - x^8 + x^13 - x^18 + x^23 + ....... + upto x^n

#include <stdio.h>
// #include<conio.h>
#include <math.h>

void main()
{
    int sum = 1, i, n, x, power = 8, ip = 5;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    printf("Enter x:");
    scanf("%d", &x);

    for (i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
            sum += pow(x, power);
        else
            sum -= pow(x, power);
        power += ip;
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}