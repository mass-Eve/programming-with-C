/*
    x^7 + x^15 + x^23 + x^31 + .......
    ___   ____   ____   ____
    1!     4!     7!     10!

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

    float nr, dr = -2, sum = 0;

    for (i = 1; i <= n; i++)
    {
        // printf("%d", );

        power = 7*i + i-1;
        nr = pow(x, power);

        int j, fac_i = 1;
        for (j = 1; j <= (dr + 3); j++)
        {
            fac_i *= j;
        }

        dr = fac_i;
        sum += nr / dr ;
    }
    printf("Sum = %f", sum);
}

/*

        128 + 1365.33

*/