/*
    x^7 + x^26 + x^63 + x^124 + .......
    __    ___    ___     ____
    7!    26!    63!     124!

*/

#include <stdio.h>
// #include<conio.h>
#include <math.h>
void main()
{
    int i, n, x, power;
    
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter x: ");
    scanf("%d", &x);

    float nr, dr, sum = 0;

    for (i = 1; i <= n; i++)
    {
        power = pow(i+1, 3) - 1 ;
        nr = pow(x, power);

        int j, fac_i = 1;
        for (j = 1; j <= (pow(i+1, 3) - 1); j++)
        {
            fac_i *= j;
        }

        dr = fac_i;

        if (i % 2 == 0)
        {
            sum -= nr / dr;
        }

        else {
            sum += nr / dr;
        }

    }
    printf("Sum = %f", sum);
}

/*
                                        WORKING

        LET x == 2 AND n == 1

        128/5040

*/