/*
        * * * * * * * * *
          * * * * * * *
            * * * * *
              * * *
                *
*/

#include<stdio.h>
void main()
{
    for (int i = 1; i<= 5; i++)
    {
        for (int spaces = 1; spaces <= (i - 1)*2; spaces++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 5 - (i - 1); j++)
        {
            printf("* ");
        }
        for (int k = 1; k <= 5 - i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}