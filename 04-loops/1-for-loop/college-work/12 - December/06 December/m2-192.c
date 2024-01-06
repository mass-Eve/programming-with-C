/*
                *
              * * *
            * * * * *
          * * * * * * *
        * * * * * * * * *
*/

#include<stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= 10 - 2*i; spaces++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (int k = 1; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}