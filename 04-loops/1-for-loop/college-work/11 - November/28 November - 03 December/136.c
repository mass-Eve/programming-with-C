/*
                            x^8 - x^13 + x^18 - x^23 + .......
                            __    __    __    __
                            1     4     7    10

*/


#include <stdio.h>
// #include<conio.h>
#include <math.h>
void main()
{
    int i, n, x, power = 3;
    
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter x: ");
    scanf("%d", &x);

    float nr, dr = -2, sum = 0;

    for (i = 1; i <= n; i++)
    {
        power += 5;
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
                    WORKING
        
        Let x == 2 and n == 2

        256 - 2048 == -1792

*/