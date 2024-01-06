// WAP to print the following pattern of numbers :-
/*
        5
        5 4 
        5 4 3
        5 4 3 2
        5 4 3 2 1

*/

#include<stdio.h>
// #include<conio.h>

void main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 5; j >= 5 - (i-1); j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

}