/*        
        *                 *
          *             *
            *         *
              *     *
                * *
              *     *
            *         *   
          *             * 
        *                 *

*/


#include<stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= (i - 1)*2; spaces++)
        {
            printf(" ");
        }
        printf("*");

        for (int spaces = 1; spaces <= 17 - (i - 1)*4; spaces++)
        {
            printf(" ");
        }
        printf("*");

        printf("\n");
    }

    for (int j = 1; j < 5; j++)
    {
        for (int spaces = 1; spaces <= 6 - (j - 1)*2; spaces++)
        {
            printf(" ");
        }
        printf("*");

        for (int spaces = 1; spaces <= 5 + (j - 1)*4; spaces++)
        {
            printf(" ");
        }
        printf("*");
        
        printf("\n");

    }

    // getch();
}