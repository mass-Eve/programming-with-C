/*
        1 1 1 1 1 
        2 2 2 2
        3 3 3
        4 4
        5
*/
#include<stdio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int num = 1; num <= 5 - (i -1); num++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}