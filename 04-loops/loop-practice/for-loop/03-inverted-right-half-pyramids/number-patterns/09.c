/*
        5 5 5 5 5 
        4 4 4 4
        3 3 3
        2 2
        1
*/

#include<stdio.h>

void main()
{

    for (int i = 5; i >= 1; i--)
    {
        for (int nums = i; nums >= 1; nums--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    // getch();
}