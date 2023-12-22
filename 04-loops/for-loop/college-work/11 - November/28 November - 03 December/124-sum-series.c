/*
    x^7 + x^26 + x^63 + x^124 + .......
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
        sum += nr/dr ;
    }
    printf("Sum = %f", sum);
}

/*
                                        WORKING

        LET x == 2 AND n == 3

    i == 1;
            power = pow(2, 3) - 1 ==> 7
            nr = pow(2, 7)  ==> 128
            dr = 7
            sum = 128/7 = 18.28

    i == 2;
            power = pow(3, 3) - 1 ==> 26
            nr = pow(2, 26)  ==> 6,71,08,864
            

*/