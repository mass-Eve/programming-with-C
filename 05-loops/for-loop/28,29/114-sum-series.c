// WAP to print the the sum of the following series ~
// 1 + x^7 + x^26 + x^63 + x^124 + ....... + upto x^n

#include <stdio.h>
// #include<conio.h>
#include <math.h>

void main()
{
    int sum = 1, i, n, x;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    printf("Enter x:");
    scanf("%d", &x);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum += pow(x, ((i + 1) * (i + 1) * (i + 1) - 1));
        else
            sum -= pow(x, ((i + 1) * (i + 1) * (i + 1) - 1));
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}