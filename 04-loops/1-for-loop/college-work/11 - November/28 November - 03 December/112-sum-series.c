// WAP to print the the sum of the following series ~
// 1 - x^1 + x^4 - x^9 + x^16 - x^25 + ....... + upton x^n

#include <stdio.h>
// #include<conio.h>
#include <math.h>

void main()
{
    int i, n, x, sum = 1;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    printf("Enter x:");
    scanf("%d", &x);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum += pow(x, (i * i));
        else
            sum -= pow(x, (i * i));
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}
