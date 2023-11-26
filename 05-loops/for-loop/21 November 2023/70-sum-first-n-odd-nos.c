// WAP to print the sum of first n-odd numbers.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int i, n, sum = 0;
    printf("Enter n:");
    scanf("%d", &n);

    for (i=1; i <= n; i++)
    {
        if (i % 2 != 0)
            sum += i;
    }
    printf("Sum of first %d even nos. is: %d", n, sum);

    // getch();
}
