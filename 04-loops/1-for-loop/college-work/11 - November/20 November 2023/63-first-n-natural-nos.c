// WAP to print the first n natural numbers.

#include <stdio.h>
// #include<conio.h>

void main()
{
    int n;

    printf("Enter the total no. of terms, n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d, ", i);
    }

    // getch();
}