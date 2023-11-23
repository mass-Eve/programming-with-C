// WAP to print the the sum of the following series ~
                // 1 + x^7 + x^15 + x^23 + x^31 + ....... + upto x^n

#include<stdio.h>
// #include<conio.h>
#include<math.h>

void main()
{
    int sum = 1, i, n, x, power = 7, ip = 8;
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
                1 + x^7 + x^15 + x^23 + x^31 ....... + upto x^n

                0    1     2     3      4

            powers --> 7, 15, 23, 31

        x = 2       n = 3
            + 1 

        i = 1       >>> power = 7 
                >>> sum += pow(2, 7) + 1 = 129
                    >>> power = 7 + 8 = 15


        i = 2       >>> power = 15
                >>> sum += pow(2, 15) = 129 + 32768 = 32897
                    >>> power = 15 + 8 = 23


        i = 3       >>> power = 23
                >>> sum += pow(2, 23) = 32897 + 8388608 = 8421505
                    >>> power = 23 + 8 = 31


        i = 4       >>> power = 31
                >>> sum += pow(2, 31) = 2155905153
                    >>> power = 31 + 8 = 39

*/