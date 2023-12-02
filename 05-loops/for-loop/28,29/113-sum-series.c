// WAP to print the the sum of the following series ~
// 1 + x^2 + x^5 + x^10 + x^17 + ....... + upto x^n

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
            sum += pow(x, (i * i + 1));
        else
            sum -= pow(x, (i * i + 1));
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}
