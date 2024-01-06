/*
        * * * * *
        * * * *
        * * *
        * *
        *
*/

#include<stdio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int stars = 1; stars <= 5 - (i-1); stars++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // getch();
}