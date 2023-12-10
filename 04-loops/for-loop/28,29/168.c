/*
    1 + 1+x^2 + 1+x^2+x^5 + 1+x^2+x^5+x^10  
        _____   _______   ___________ + ....... upto n
          2        9          28
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
        nr += pow(x, i*i + 1);
        dr = i * i * i + 1 ;

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
            sum = 1 - 5/2  == -1.5 

    i = 2;
            sum = -1.5 + 4.11 ==> 2.61

*/