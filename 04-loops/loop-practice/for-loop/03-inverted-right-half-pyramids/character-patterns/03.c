/*
        # # # # #
        * * * * 
        # # #
        * *
        #
*/
#include<stdio.h>

void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int pos = 1; pos <= 5 - (i-1); pos++)
        {
            if (i % 2 == 0)
                printf("* ");
            else
                printf("# ");
        }
        printf("\n");
    }
}