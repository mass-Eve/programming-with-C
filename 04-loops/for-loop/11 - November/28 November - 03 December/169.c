/*
    1 + 1+x^2 + 1+x^2+x^9 + 1+x^2+x^9+x^28
        _____   _______   ___________ + ....... upto n
          1        4          7
*/

#include <stdio.h>
// #include<conio.h>
#include <math.h>
void main()
{
    int i, n, x, dr = -2;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter x: ");
    scanf("%d", &x);

    float nr = 1, sum = 1;

    for (i = 1; i <= n; i++)
    {
        nr += pow(x, i * i * i + 1);
        dr += 3;

        if (i % 2 == 0)
        {
            sum += nr / dr;
        }

        else {
            sum -= nr / dr;
        }

    }
    printf("Sum = %f", sum);
}

/*

        let x == 2 and n == 3

    i = 1;
            sum = -5 + 1 == -4

    i = 2;
            sum = -4 + 129.25 ==> 125.25

*/