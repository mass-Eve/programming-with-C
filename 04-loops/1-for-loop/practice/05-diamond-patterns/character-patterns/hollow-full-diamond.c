/*
                *
              *   *           3
            *       *         7
          *           *       11
        *               *     15
          *           *
            *       *
              *   *
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
        if (i == 1)
            printf("*");
        else{
            printf("*");
            for (int spaces = 1; spaces <= 3 + 4*(i-2); spaces++)
            {
                printf(" ");
            }
            printf("*");
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
        if (j == 4)
            printf("*");
        else 
        {
            printf("*");
            for (int spaces = 1; spaces <= 11 - 4*(j-1); spaces++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}