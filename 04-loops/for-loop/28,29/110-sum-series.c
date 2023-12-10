// WAP to print the the sum of the following series ~
// 1 - x^3 + x^5 - x^7 + x^9 + ....... + upton x^n

#include <stdio.h>
// #include<conio.h>
#include <math.h>

void main()
{
    int i, n, sum = 1, x;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter x: ");
    scanf("%d", &x);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum += pow(x, (i*2 + 1));
        else
            sum -= pow(x, (i*2 + 1));
    }
    printf("Sum = %d", sum);
}

/*                  Working

        let n == 4 and x = 2
            series will become -> 1 - 2^3 + 2^5 - 2^7 + 2^9


*/