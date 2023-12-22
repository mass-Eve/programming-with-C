/*
        x^1 + x^3 + x^5 + x^7 + .......
        __    __    __    __
        1!    4!    9!    16!

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
        power = (i - 1) * 2 + 1;
        nr = pow(x, power);

        int j, fac_i = 1;
        for (j = 1; j <= (i*i); j++)
        {
            fac_i *= j;
        }

        dr = fac_i;
        
        sum += nr / dr;
    }
    printf("Sum = %f", sum);
}

/*
                        WORKING

        let x == 2 and n == 4

        2 + 8/24 == 2.34

*/