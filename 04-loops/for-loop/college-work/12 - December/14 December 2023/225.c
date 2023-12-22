/*
        * * * * *
        *       *
        *       *
        *       *
        * * * * *
*/

#include<stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        printf("* ");
    }
    printf("\n");

    for (int j = 1; j <= 3; j++)
    {
        printf("* ");
        for (int spaces = 1; spaces <= 6; spaces++)
        {
            printf(" ");
        }
        printf("* ");
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        printf("* ");
    }
    printf("\n");

    // getch();
}