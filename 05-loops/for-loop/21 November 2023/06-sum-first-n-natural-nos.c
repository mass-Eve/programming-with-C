// WAP to print the sum of first n-natural nos.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int i, n, sum = 0;
    printf("Enter no of terms, n:");
    scanf("%d", &n);

    for (i=1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of first %d natural numbers is: %d", n, sum);

    // getch();
}