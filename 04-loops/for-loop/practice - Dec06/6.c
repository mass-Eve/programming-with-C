/*
            *
           * * 
          * * * 
         * * * * 
        * * * * *
*/

#include<stdio.h>
// #include<conio.h>

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= 4 - (i - 1); spaces++)
        {
            printf(" ");
        }

        for (int j = 1; j < (i + 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // getch();
}