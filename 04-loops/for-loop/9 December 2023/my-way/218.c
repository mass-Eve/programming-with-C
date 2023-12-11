/*
        5 6 7 8 9 9 8 7 6 5
        5 6 7 8     8 7 6 5
        5 6 7         7 6 5
        5 6             6 5
        5                 5
*/

#include<stdio.h>
// #include<conio.h>

void main()
{
    for (int i = 5; i <= 9; i++)
    {
        for (int j = 5; j <= 9 - (i - 5) ; j++)
        {
            printf("%d ", j);
        }
        if (i > 5)
        {
            for (int spaces = 1; spaces < 5 + (i - 6)*4; spaces++)
            {
                printf(" ");
            }
        }
        for (int k = 9 - (i - 5); k >= 5; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    // getch();
}