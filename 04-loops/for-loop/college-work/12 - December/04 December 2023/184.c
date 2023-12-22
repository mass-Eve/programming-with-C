// WAP to print the following pattern of numbers :-
/*
        5
        6 5 
        7 6 5
        8 7 6 5
        9 8 7 6 5

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
        for (int j = i+4; j >= 5; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

}