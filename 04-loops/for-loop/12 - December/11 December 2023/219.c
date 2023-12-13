/*
    *                 *
      *             *
        *         *
          *     *
            * * 
*/

#include<stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= (i-1)*2; spaces++)
        {
            printf(" ");
        }
        printf("* ");
        for (int spaces = 1; spaces <= 17 - (i - 1)*4; spaces++)
        {
            printf(" ");
        }
        printf("* ");
        printf("\n");
    }

    // getch();
}