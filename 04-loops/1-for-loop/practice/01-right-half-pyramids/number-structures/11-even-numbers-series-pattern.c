/*
        2
        2 4
        2 4 6
        2 4 6 8
        2 4 6 8 10
*/

#include<stdio.h>

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int num = 2; num <= i*2; num++)
        {
            if (num % 2 == 0)
                printf("%d", num);
        }
        printf("\n");
    }
}