/*
        01 02 03 04 05
        10 09 08 07 06 
        11 12 13 14 15
        20 19 18 17 16
        21 22 23 24 25
*/

#include<stdio.h>
// #include<conio.h>

void main()
{
    int voj = 0;

    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 != 0)
        {
            voj += 1;  // >>> 1 >>> 11 >>> 21

            for (int j = voj; j <= (voj + 4); j++)
            {
                if (j < 10)
                    printf(" %d ", j);
                else    
                    printf("%d ", j);
            }
            printf("\n");
        }

        else {
            voj = voj + 9; // >>> 10 >>> 20

            for (int j = voj; j >= (voj - 4); j--)
            {
                if (j < 10)
                    printf(" %d ", j);
                else    
                    printf("%d ", j);
            }
            printf("\n");
        }
    }

    // getch();
}