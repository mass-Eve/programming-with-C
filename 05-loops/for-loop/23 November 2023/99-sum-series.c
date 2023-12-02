// WAP to print the the sum of the following series ~
// 1 + x^3 + x^5 + x^7 + x^9 + ....... + upton x^n

#include <stdio.h>
// #include<conio.h>
#include <math.h>

void main()
{
    int i, n, sum = 0, x;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter x: ");
    scanf("%d", &x);

    for (i = 1; i <= n; i++)
    {
        sum += pow(x, (i*2 + 1));
    }
    printf("Sum = %d", sum);
}

/*                  Working

        let n == 4 and x = 2
            series will become -> 1 + 2^3 + 2^5 + 2^7 + 2^9

    i == 1;
            sum = 0 + pow(2, 1*2+1)
        ==>    sum = 0 + pow(2, 3)          == 8

    i == 2;
            sum = 8 + pow(2, 2*2+1)
        ==>    sum = 8 + pow(2, 5)          == 40

    i == 3;
            sum = 40 + pow(2, 3*2+1)
        ==>    sum = 40 + pow(2, 7)          == 168

    i == 4;
            sum = 168 + pow(2, 4*2+1)
        ==>    sum = 168 + pow(2, 9)          == 680

*/