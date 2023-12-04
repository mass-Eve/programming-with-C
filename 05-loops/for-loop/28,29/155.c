/*
    x^1 + x^4 + x^7 + x^10 + .......
    __    __    ___    ___
    3!    8!    15!    24!

*/

#include <stdio.h>
// #include<conio.h>
#include <math.h>
void main()
{
    int i, n, x, power = -2;
    
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter x: ");
    scanf("%d", &x);

    float nr, dr, sum = 0;

    for (i = 1; i <= n; i++)
    {
        power += 3;
        nr = pow(x, power);

        int j, fac_i = 1;
        for (j = 1; j <= (pow(i+1, 2) - 1); j++)
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

        LET x = 2 and n == 2

        2/6 - 16/40320
        0.34 - 0.000396

*/