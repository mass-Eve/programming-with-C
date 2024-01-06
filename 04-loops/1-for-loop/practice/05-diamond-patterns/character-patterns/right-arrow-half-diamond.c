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
        for (int uwd = 1; uwd <= i; uwd++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int j = 1; j <= 4; j++)
    {
        for (int dwd = 1; dwd <= 4 - (j - 1); dwd++)
        {
            printf("* ");
        }
        printf("\n");
    }
}