// WAP to print the the sum of the following series ~
                // 1 + x^2 + x^9 + x^28 + x^65 + ....... + upto x^n

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

    for (i=1; i <= n; i++)
    {
        sum += pow(x, (i*i*i + 1));
    }
    printf("The sum of this series is: %d", sum);

    // getch();
}


/*
                1 + x^2 + x^9 + x^28 + x^65 + ....... + upto x^n

                0    1     2     3      4

            powers --> 2, 9, 28, 65

        x = 2       n = 3
            + 1 

        i = 1       
                pow(2, (i*i*i + 1))       >>> for pow(3) = 2^2 + 1 == 5


        i = 2       
                pow(2, (i*i*i + 1))       >>> for pow(9) = 2^9 + 5 == 517


        i = 3       
                pow(2, (i*i*i + 1))       >>> for pow(28) = 2^28 + 517 == 268435973


        i = 4       
                pow(2, (i*i*i + 1))       >>> for pow(28) = 2^65 + 268435970 == 3.689348814768754e+19

*/