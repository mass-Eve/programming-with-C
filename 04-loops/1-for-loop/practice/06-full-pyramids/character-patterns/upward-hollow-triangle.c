/*
        *
       * *
      *   *
     *     *
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

        if (i == 1 || i == 5)
        {
            for (int stars = 1; stars <= i; stars++)
            {       
                printf("* ");
            }
        }

        else {
            printf("*");
            for (int spaces = 1; spaces <= (i - 2)*2 + 1; spaces++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}