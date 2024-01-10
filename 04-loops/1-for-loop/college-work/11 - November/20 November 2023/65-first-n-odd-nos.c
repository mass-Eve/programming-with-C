// WAP to print the first n odd numbers.

#include <stdio.h>
// #include<conio.h>

void main()
{
    int n;

    printf("Enter the total no. of terms, n:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // odd numbers = (i*2 + 1)
        printf("%d, ", (i*2 + 1));
    }

    // getch();
}