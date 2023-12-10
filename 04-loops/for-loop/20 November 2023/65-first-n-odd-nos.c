// WAP to print the first n odd numbers.

#include <stdio.h>
// #include<conio.h>

void main()
{
    int i, n;

    printf("Enter n here:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d, ", i);
        }
    }

    // getch();
}
