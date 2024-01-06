/*
    x^2 + x^9 + x^28 + x^65 + .......
    ___   ___   ____   ____
    2!     9!    28!    65!

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
        power = i*i*i + 1;
        nr = pow(x, power);

        int j, fac_i = 1;
        for (j = 1; j <= (i*i*i + 1); j++)
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

    let x == 2 and n == 2

    2 - 0.00141

*/