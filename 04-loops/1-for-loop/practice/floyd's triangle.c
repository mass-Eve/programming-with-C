/*
        1 
        0 1
        1 0 1 
        0 1 0 1 
        1 0 1 0 1
*/

#include<stdio.h>

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    printf("1 ");
                }
                else{
                    printf("0 ");
                }
            }
            else{
                if (j % 2 != 0)
                {
                    printf("1 ");
                }
                else{
                    printf("0 ");
                }
            }
        }
        printf("\n");
    }
}