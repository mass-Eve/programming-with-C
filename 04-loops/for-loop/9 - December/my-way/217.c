/*
        1 2 3 4 5 5 4 3 2 1
        1 2 3 4     4 3 2 1
        1 2 3         3 2 1
        1 2             2 1
        1                 1
*/

#include<stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - (i-1) ; j++)
        {
            printf("%d ", j);
        }
        if (i > 1)
        {
            for (int spaces = 1; spaces < 5 + (i - 2)*4; spaces++)
            {
                printf(" ");
            }
        }
        for (int k = 5 - (i - 1); k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    // getch();
}