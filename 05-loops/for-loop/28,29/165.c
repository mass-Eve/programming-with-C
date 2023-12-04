/*
    1 - 1+x + 1+x+x^2 - 1+x+x^2+x^3
        ___   ______    ___________  + ......... upto n 
         2      4            6
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

    float nr = 1, dr, sum = 1;

    for (i = 1; i <= n; i++)
    {
        nr += pow(x, i);
        dr = i * 2 ;

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

        let x = 2 and n = 3

    i = 1;
            nr = 1 + pow(2, 1) ==> 3
            dr = 2
            sum = 1 - 1.5 ==> -0.5

    i = 2;
            nr = 1 + pow(2, 1) + pow(2, 2) ==> 7
            dr = 4
            sum = -0.5 + 1.75 ==> 1.25

    i = 3;
            nr = 1 + pow(2, 1) + pow(2, 2) + pow(2, 3) ==> 15
            dr = 6
            sum = 1.25 - 2.5 ==> -1.25

*/