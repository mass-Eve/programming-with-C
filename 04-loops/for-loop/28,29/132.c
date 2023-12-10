/*
                            x^3 - x^8 + x^15 - x^24 + .......
                            __    __    __    __
                            2     5     10    17

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
        power =  i * (i + 2);
        nr = pow(x, power);
        dr = (i * i) + 1 ;

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

        8 / 2 - 264/5
        4 - 52.8 == 48.8


*/