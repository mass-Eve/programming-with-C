/*
    x^2 + x^5 + x^10 + x^17 + .......
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
        sum += nr/dr;
    }
    printf("Sum = %f", sum);
}


/*
                                    WORKING
        
        let x == 2 and n == 3

    i == 1;
            power = 2;
            nr = 4
            dr = 2
            sum = 4/2 ==> 2

    i == 2;
            power = 5
            nr = 32
            dr = 9
            sum = 2 + 32/9 = 5.56

    i = 3;
            power = 10
            nr = 1024
            dr = 28
            sum = 5.56 + 1024/28 = 42.13

*/