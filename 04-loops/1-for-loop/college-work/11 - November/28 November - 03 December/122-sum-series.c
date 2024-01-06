/*
    x^3 + x^8 + x^15 + x^24 + .......
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
        sum += nr / dr ;
    }
    printf("Sum = %f", sum);
}

/*
                                WORKING

        let x == 2 and n == 4

    i == 1;
            power = 3
            nr = 2, 3 ==> 8
            dr = 2 
            sum = 8 / 2 ==> 4

    i == 2;
            power = 8
            nr = 2, 8 ==> 264
            dr = 5
            sum = 264/5 + 4 ==> 56.8

    i == 3;
            power = 15
            nr = 2, 15 ==> 32768
            dr = 10
            sum = 56.8 + 3276.8 ==> 3333.6





*/