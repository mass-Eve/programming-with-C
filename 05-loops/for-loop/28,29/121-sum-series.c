/*
                            x^2 + x^4 + x^6 + x^8 + .......
                            __    __    __    __
                            1     8     27    64

*/

#include <stdio.h>
// #include<conio.h>
#include <math.h>
void main()
{
    int i, n, x;
    float sum = 0;
    
    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter x: ");
    scanf("%d", &x);

    float nr, dr, power;

    for (i = 1; i <= n; i++)
    {
        power = i * 2 ;
        nr = pow(x, power);
        dr = pow(i, 3);
        sum += nr/dr;
    }
    printf("Sum = %f", sum);
}

/*
                                WORKING

        let x == 2 and n == 4

    i == 1;
            power = 2 
            nr = pow(2, 2) == 4
            dr = pow(1, 3) == 1
            sum = 4

    i == 2;
            power = 4
            nr = pow(2, 4) == 16
            dr = pow(2, 3) == 8
            sum = 4 + 16/8 == 6

    i == 3;
            power = 6
            nr = pow(2, 6) == 64
            dr = pow(3, 3) == 27
            sum = 6 + 64/27 == 8.37

    i == 4;
            power = 8
            nr = pow(2, 8) = 264
            dr = 64
            sum = 8.37 + 264/64 == 70.495

*/