/*
                            x^1 - x^4 + x^7 - x^10 + .......
                            __    __    __    __
                            3     8     15    24

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
        dr = pow(i+1, 2) - 1;

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

        LET x = 2 and n == 4

        0.67 - 2 + 8.53 - 42.67

*/