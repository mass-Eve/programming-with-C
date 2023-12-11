/*
        1                 1
        1 2             2 1
        1 2 3         3 2 1
        1 2 3 4     4 3 2 1
        1 2 3 4 5 5 4 3 2 1
*/

#include<stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            printf("%d ", j);
        }
        for (int spaces = 1; spaces < 17 - (i - 1)*4; spaces++)
        {
            printf(" ");
        }
        for (int k = i; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    // getch();
}