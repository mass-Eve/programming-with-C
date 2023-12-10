// Write a program in C to display the multiplication table for a given integer.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int i, n;
    printf("Enter the number whose multiplication-table is to be printed: ");
    scanf("%d", &n);

    for (i=1; i <= 10; i++)
    {
        printf("%d X %d = %d", n, i, n*i);
        printf("\n");
    }

    // getch();
}