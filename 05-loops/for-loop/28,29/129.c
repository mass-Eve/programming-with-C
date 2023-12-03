/*
    x^1 + x^4 + x^9 + x^16 + .......
    __    __    __    __
    1     4     9    16

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
        power = i*i;
        nr = pow(x, power);
        dr = i*i;
        sum += nr / dr ;
    }
    printf("Sum = %f", sum);
}


/*

        let x == 2 and n == 3

        2 + 4 + 56.89 ==> 62.89

*/