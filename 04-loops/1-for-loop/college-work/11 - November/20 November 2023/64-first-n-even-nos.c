// WAP to print the first n even numbers.

#include <stdio.h>
// #include<conio.h>

void main()
{
    int n;

    printf("Enter the total no. of terms:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // even numbers = (i * 2)
        printf("%d, ", i*2);
    }

    // getch();
}