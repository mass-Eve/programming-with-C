/*
                *
              * * *
            * * * * *
          * * * * * * *
        * * * * * * * * *
*/

/*
    row 1 == 16 spaces >>> n(stars) == 1
    row 2 == 14 spaces >>> n(stars) == 3
    row 3 == 12 spaces >>> n(stars) == 5
    row 4 == 10 spaces >>> n(stars) == 7
    row 5 == 08 spaces >>> n(stars) == 9
*/

#include <stdio.h>
// #include<conio.h>

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= 8 - ((i - 1) * 2); spaces++)
        {
            printf(" ");
        }

        for (int stars = 1; stars <= 1 + 2*(i-1); stars++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // getch();
}