// WAP to print the following pattern of numbers :-
/*
        5
        5 6
        5 6 7
        5 6 7 8
        5 6 7 8 9
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
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j+4);
        }
        printf("\n");
    }

}