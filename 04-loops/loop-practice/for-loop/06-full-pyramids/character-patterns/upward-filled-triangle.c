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
        for (int stars = 1; stars <= i; stars++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // getch();
}