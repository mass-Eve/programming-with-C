/*
    * * * * *
     *     *
      *   *
       * * 
        *
*/

#include<stdio.h>
// #include<conio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= (i - 1); spaces++)
        {
            printf(" ");
        }
        if (i == 1 || i == 5)
        {
            for (int stars = 1; stars <= (5 - (i - 1)); stars++)
            {
                printf("* ");
            }
        }
        else {
            printf("*");
            for (int spaces = 1; spaces <= (5 - (i - 2)*2); spaces++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}