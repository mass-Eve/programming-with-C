/*
    * * * * *
     * * * *
      * * *
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
        for (int stars = 1; stars <= (5 - (i - 1)); stars++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // getch();
}