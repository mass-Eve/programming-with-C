/*
                            x^7 - x^15 + x^23 - x^31 + .......
                            __    __    __    __
                            1     4     7    10

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
        dr += 3;

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

    128 - 8192 = -8064

*/