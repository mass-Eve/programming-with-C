// WAP to print the the sum of the following series ~
// 1 + x^2 + x^4 + x^6 + x^8 + ....... + upton x^n

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
            sum += pow(x, (i * 2));
        else
            sum -= pow(x, (i * 2));
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}

/*
                    WORKING

    Let x == 2 and n == 4

        1 + 2^2 + 2^4 + 2^6 + 2^8


*/