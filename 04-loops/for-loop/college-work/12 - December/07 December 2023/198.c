/*
        *
        * * 
        * * *
        * * * *
        * * * * *
        * * * *
        * * *
        * * 
        *
*/

#include<stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int k = 1; k <= 4; k++)
    {
        for (int l = 1; l <= 4 - (k - 1); l++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // getch();
}