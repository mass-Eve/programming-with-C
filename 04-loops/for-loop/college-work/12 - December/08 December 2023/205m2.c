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

    for (int i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {
            for (int spaces = 1; spaces <= 8 - (i - 1)*2 ; spaces++)
            {
                printf(" ");
            }
            for (int j = 1; j <= (i * 2 - 1); j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for (int spaces = 1; spaces <= (i - 5 )*2; spaces++)
            {
                printf(" ");
            }
            for (int k = 1; k <= 7 - ((i - 5 ) - 1)*2; k++)
            {
                printf("* ");
            }
            printf("\n");
            
        }
    }

    // getch();
}