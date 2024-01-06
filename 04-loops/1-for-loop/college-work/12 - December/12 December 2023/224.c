/*
            * *
          *     *
        *         *
          *     *
            * * 
*/

#include <stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 1; i <= 3; i++)
    {
        for (int spaces = 1; spaces <= 4 - (i - 1) * 2; spaces++)
        {
            printf(" ");
        }
        printf("*");

        for (int spaces = 1; spaces <= 1 + (i - 1) * 4; spaces++)
        {
            printf(" ");
        }
        printf("*");

        printf("\n");
    }
    for (int j = 1; j < 3; j++)
    {
        for (int spaces = 1; spaces <= j*2; spaces++)
        {
            printf(" ");
        }
        printf("*");

        for (int spaces = 1; spaces <= 5 - (j - 1)*4; spaces++)
        {
            printf(" ");
        }
        printf("*");
        
        printf("\n");
    }

    // getch();
}