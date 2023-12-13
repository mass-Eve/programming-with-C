/*
        * * * * * * * * *
          # # # # # # #
            * * * * *
              # # #
                *
*/

#include <stdio.h>
// #include<conio.h>

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= ((i - 1) * 2); spaces++)
        {
            printf(" ");
        }

        for (int stars = 1; stars <= 9 - 2*(i-1); stars++)
        {
            if (i % 2 != 0)
            printf("* ");
            else
            printf("# ");
        }
        printf("\n");
    }

    // getch();
}