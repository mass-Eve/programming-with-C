/*
        * * * * * * * * * * 
        * * * *     * * * *
        * * *         * * * 
        * *             * * 
        *                 *
*/

#include<stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - (i - 1); j++)
        {
            printf("* ");
        }
        if (i > 1)
        {
            for (int spaces = 1; spaces < 5 + (i-2)*4; spaces++)
            {
                printf(" ");
            }
        }
        for (int j = 1; j <= 5 - (i - 1); j++)
        {
            printf("* ");
        }        
        printf("\n");
    }

    // getch();
}