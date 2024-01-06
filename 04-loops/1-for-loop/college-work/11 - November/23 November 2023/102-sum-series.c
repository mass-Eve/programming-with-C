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
        sum += pow(x, (i * i + 1));
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}

/*
                1 + x^2 + x^5 + x^10 + x^17 + ....... + upto x^n

            powers --> 0, 2, 5, 10, 17

        i = 1      >>> i * i + 1 == 2
        i = 2      >>> i * i + 1 == 5
        i = 3      >>> i * i + 1 == 10
        i = 4      >>> i * i + 1 == 10

        x = 2       n = 3
            + 1

        i = 1;
                n = 2 ; sum = 1 + 2^2 = 5
        i = 2;
                n = 5 ; sum = 5 + 2^5 = 5 + 32 = 37
        i = 3;
                n = 10 ; sum = 37 + 2^10 = 37 + 1024 = 1060

*/
