/*
        1
        1 3
        1 3 5
        1 3 5 7
        1 3 5 7 9
*/

#include<stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int num = 1; num <= i; num++)
        {
            printf("%d ", (num-1)*2 + 1);
        }
        printf("\n");
    }
}