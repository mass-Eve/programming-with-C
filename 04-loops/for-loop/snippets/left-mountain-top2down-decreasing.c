// WAP to print the following pattern of characters:
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
    // This variable has two main functions or jobs to do. 
    // The first one is to tell how many rows will be there in the patter. 
    // The Second one is to tell what is the maximum amount that the character has to be printed in the pattern.
    int n_of_rows;

    printf("Enter the number of rows: ");
    scanf("%d", &n_of_rows);

    // The first loop, which start with <i> as variable, does the job of creating a fresh row everytime.
    // This loop iterates the loop-body in a way that it runs exactly the number of times we need rows. i.e if 5 rows are required, it will run 5 times. 
    for (int i = 1; i <= n_of_rows; i++) 
    {

        // The loop inside the first loop does the job of priniting the contents of the row.
        // Here, the maximum no of characters are to be printed in the first row, so I take j as the maximum value allowed (or the no-of-rows)
        // And the minimum allowed no of characters in a row is 1, so it is taken as the minimum value in the condition.
        // And then in evry next row, no of characters to be printed are decreased with the count of 1, so we can write j-- for that.  
        for (int j = n_of_rows - (i - 1); j >= 1; j--)
        {
            // Item to print, with a space for better visuals
            printf("* ");
        }

        // A new line to change the line after every line's content printed successfully.
        printf("\n");
    }
}