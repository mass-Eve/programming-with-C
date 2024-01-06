/*
                            x^7 - x^26 + x^63 - x^124 + .......
                            __    __    __    __
                            7     26     63    124

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
        dr = pow(i+1, 3) - 1 ;

        if (i % 2 == 0)
        {
            sum -= nr / dr;
        }

        else
        {
            sum += nr / dr;
        }

    }
    printf("Sum = %f", sum);
}

/*
                                        WORKING

        LET x == 2 AND n == 3

    18.28 - 25,81,110.15

*/