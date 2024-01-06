/*
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1 
*/

#include<stdio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int num = 1; num <= 5 - (i - 1); num++)
        {
            printf("%d ", num);
        }
        printf("\n");
    }

    // getch();
}