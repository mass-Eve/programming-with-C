/*
    1 + 1+x + 1+x+x^8 + 1+x+x^8+x^27  
        ___   _______   ___________ + ....... upto n
         2       5          10
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
        nr += pow(x, i*i*i);
        dr = i * i + 1 ;
        sum += nr / dr ;
    }
    printf("Sum = %f", sum);
}


/*

        let x == 2 and n == 3 

    i = 1;
            nr = 1 + pow(2, 1) ==> 3
            dr = 2
            sum = 1 + 1.5 = 2.5

    i = 2;
            nr = 1 + pow(2, 1) + pow(2, 8) ==> 259
            dr = 5
            sum = 2.5 + 51.8 ==> 54.3

*/