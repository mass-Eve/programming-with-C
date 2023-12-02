// WAP to print the the sum of the following series ~
// 1 - x^2 + x^3 - x^4 + ....... + upton x^n

#include <stdio.h>
// #include<conio.h>
#include <math.h>

void main()
{
    int sum = 0, i, n, x;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    printf("Enter x:");
    scanf("%d", &x);

    for (i = 0; i <= n; i++)
    {
        if ((i+1) % 2 == 0)
        {
            sum -= pow(x, i);
        }
        else
        {
            sum += pow(x, i);
        }
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}

/*
                            Working
            let n == 4      &   x == 2

            + 1 - 2^2 + 2^3

    i = 






*/