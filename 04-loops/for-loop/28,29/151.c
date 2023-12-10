/*
        x^2 - x^4 + x^6 - x^8 + .......
        __    __    ___   ___
        1!    8!    27!   64!

*/

#include <stdio.h>
// #include<conio.h>
#include <math.h>
void main()
{
    int i, n, x;
    float sum = 0;
    
    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter x: ");
    scanf("%d", &x);

    float nr, dr, power;

    for (i = 1; i <= n; i++)
    {
        power = i * 2 ;
        nr = pow(x, power);

        int j, fac_i = 1;
        for (j = 1; j <= (i*i*i); j++)
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

        let x == 2 and n == 2

        4 - 0.000596

*/