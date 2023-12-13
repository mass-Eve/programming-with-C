/*
        *                 *
        * *             * * 
        * * *         * * * 
        * * * *     * * * *
        * * * * * * * * * * 
*/

#include<stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (int spaces = 1; spaces < 17 - (i - 1)*4; spaces++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }        
        printf("\n");
    }

    // getch();
}