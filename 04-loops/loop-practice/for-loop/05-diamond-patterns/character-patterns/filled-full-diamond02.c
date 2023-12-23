/*
                *
              * * *
            * * * * *
          * * * * * * *
        * * * * * * * * *
          * * * * * * *
            * * * * *
              * * *
                *
*/

#include<stdio.h>
// #include<conio.h>

void main()
{
    // upward
    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= 8 - (i - 1)*2; spaces++)
        {
            printf(" ");
        }
        for (int stars = 1; stars <= (i-1)*2 + 1; stars++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // downward
    for (int j = 1; j <= 4; j++)
    {
        for (int spaces = 1; spaces <= j*2; spaces++)
        {
            printf(" ");
        }
        for (int stars = 1; stars <= 7 - 2*(j-1); stars++)
        {
            printf("* ");
        }
        printf("\n");
    }
}