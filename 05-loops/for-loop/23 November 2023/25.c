// WAP to print the the sum of the following series ~
                // 1 + x^7 + x^26 + x^63 + x^124 + ....... + upto x^n

#include<stdio.h>
// #include<conio.h>
#include<math.h>

void main()
{
    int sum = 1, i, n, x;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    printf("Enter x:");
    scanf("%d", &x);

    for (i=2; i <= n; i++)
    {
        sum += pow(x, (i*i*i - 1));
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}


/*
                1 + x^7 + x^26 + x^63 + x^124 + ....... + upto x^n

            powers --> 0, 2, 5, 10, 17

        i = 2      n >>> i * i * i - 1 == 7 
        i = 3      n >>> i * i * i - 1 == 26
        i = 4      n >>> i * i * i - 1 == 63

        x = 2       n = 4
            + 1 

        i = 2;
                n = 7 ; sum = 1 + 2^7 = 129
        i = 3;
                n = 26 ; sum = 129 + 2^26 = 67108994










*/