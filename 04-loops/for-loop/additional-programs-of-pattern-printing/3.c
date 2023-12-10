/*
    * * * * * 
    * * * *
    * * *
    * *
    *

*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 5 - (i - 1); j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}