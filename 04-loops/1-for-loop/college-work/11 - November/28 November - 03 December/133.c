/*
                            x^2 - x^5 + x^10 - x^17 + .......
                            __    __    __    __
                            2     9     28    65

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
        power = (i * i) + 1 ;
        nr = pow(x, power);
        dr = (i*i*i) + 1 ;

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
        
        let x == 2 and n == 3

        2 - 3.56 + 36.57 

*/