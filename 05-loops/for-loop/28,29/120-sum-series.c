/*
                            x^1 + x^3 + x^5 + x^7 + .......
                            __    __    __    __
                            1     4     9     16

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
        dr = i * i;
        sum += nr / dr;
    }
    printf("Sum = %f", sum);
}

/*
                        WORKING

        let x == 2 and n == 4

    i == 1;
            power = 1
            nr = pow(2, 1) == 2
            dr = 1
            sum = 2/1 == 2

    i == 2;
            power = 3
            nr = pow(2, 3) == 8
            dr = 4
            sum = 2 + 8/4 == 4

    i == 3;
            power = 5
            nr = pow(2, 5) == 32
            dr = 9
            sum = 4 + 32/9 == 7.56

    i == 4
            power = 7
            nr = pow(2, 7) == 128
            dr = 16
            sum = 7.56 + 128/16 == 23.56

*/