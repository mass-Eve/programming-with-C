/*
                *
              * * 
            * * *
          * * * *
        * * * * *
          # # # #
            # # #
              # # 
                #
*/

#include<stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= 8 - (i - 1)*2 ; spaces++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int k = 1; k <= 4; k++)
    {
        for (int spaces = 1; spaces <= k * 2; spaces++)
        {
            printf(" ");
        }
        for (int l = 1; l <= 4 - (k - 1) ; l++)
        {
            printf("# ");
        }
        printf("\n");
    }

    // getch();
}