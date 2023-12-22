/*
        9
        9 8
        9 8 7
        9 8 7 6
        9 8 7 6 5
        9 8 7 6
        9 8 7
        9 8
        9
*/

#include<stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 9; j >= 9 - (i - 1); j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    for (int k = 1; k <= 4; k++)
    {
        for (int l = 9; l >= 6 + (k - 1); l--)
        {
            printf("%d ", l);
        }
        printf("\n");
    }

    // getch();
}