// WAP to print the the sum of the following series ~
                // 1 + x^8 + x^13 + x^18 + x^23 + ....... + upto x^n

#include<stdio.h>
// #include<conio.h>
#include<math.h>

void main()
{
    int sum = 1, i, n, x, power = 8, ip = 5;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    printf("Enter x:");
    scanf("%d", &x);

    for (i=1; i <= n; i++)
    {
        sum += pow(x, power);
        power += ip;
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}


/*
                1 + x^8 + x^13 + x^18 + x^23 ....... + upto x^n

                0    1     2     3      4

            powers --> 8, 13, 18, 23

        x = 2       n = 3
            + 1 

        i = 1       >>> power = 8 
                >>> sum += pow(2, 8) + 1 = 257
                    >>> power = 8 + 5 = 13


        i = 2       >>> power = 13
                >>> sum += pow(2, 13) = 257 + 8192 = 8449
                    >>> power = 13 + 5 = 18


        i = 3       >>> power = 18
                >>> sum += pow(2, 18) = 8449 + 262144 = 270593
                    >>> power = 18 + 5 = 23


        i = 4       >>> power = 23
                >>> sum += pow(2, 23) = 270593 + 8388608 = 8659201
                    >>> power = 23 + 5 = 28



*/