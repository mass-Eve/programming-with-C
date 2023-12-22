// WAP to print the sum of squares of first n-natural numbers.

#include <stdio.h>
// #include<conio.h>

void main()
{
    int i, n, sum = 0;
    printf("Enter n:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += (i * i);
    }
    printf("Sum of first %d even nos. is: %d", n, sum);

    // getch();
}
