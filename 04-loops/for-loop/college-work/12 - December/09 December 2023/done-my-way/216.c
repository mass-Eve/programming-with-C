/*
        5                 5
        5 6             6 5
        5 6 7         7 6 5
        5 6 7 8     8 7 6 5
        5 6 7 8 9 9 8 7 6 5
*/

#include<stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 5; i <= 9; i++)
    {
        for (int j = 5; j <= i ; j++)
        {
            printf("%d ", j);
        }
        for (int spaces = 1; spaces < 17 - (i - 5)*4; spaces++)
        {
            printf(" ");
        }
        for (int k = i; k >= 5; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    // getch();
}