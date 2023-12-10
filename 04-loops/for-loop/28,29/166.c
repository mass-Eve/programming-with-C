/*
    1 - 1+x + 1+x+x^4 - 1+x+x^4+x^9  
        ___   _______   ___________ + ....... upto n
         1       3           5
*/

// 1 - 3 + 6.33 - 106.2

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
        nr += pow(x, i*i);
        dr = i * 2 - 1 ;
        
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
            nr = 1 + pow(2, 1) ==> 3
            dr = 1
            sum = 1 - 3 = -2

    i = 2;
            nr = 1 + pow(2, 1) + pow(2, 4) ==> 19
            dr = 3
            sum = -2 + 6.34 ==> 4.34

    i = 3;
            nr = 1 + pow(2, 1) + pow(2, 4) + pow(2, 9) ==> 531
            dr = 5
            sum = 4.34 - 106.2 ==> -101.86
*/