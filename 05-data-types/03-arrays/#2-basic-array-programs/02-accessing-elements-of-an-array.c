#include <stdio.h>
void main()
{
    int marks[4] = {45, 48, 39, 31};

    // Accessing elements of an array using printf() function.
    printf("using multiple printf() statements - \n");

    printf("Marks of Student 1: %d\n", marks[0]);
    printf("Marks of Student 2: %d\n", marks[1]);
    printf("Marks of Student 3: %d\n", marks[2]);
    printf("Marks of Student 4: %d\n", marks[3]);

    // Accessing elements of an array using for loop.
    printf("using for loop - \n");

    for (int i = 0; i < 4; i++)
    {
        printf("Marks of Student %d: %d\n", (i+1), marks[i]);
    }
    
    // Accessing elements of an array using while loop.
    printf("using while loop - \n");

    int j = 0;
    while (j < 4)
    {
        printf("Marks of Student %d: %d\n", (j+1), marks[j]);
        j++;
    }

    // Accessing elements of an array using do-while loop.
    printf("using do-while loop - \n");

    int k = 0;
    do{
        printf("Marks of Student %d: %d\n", (k+1), marks[k]);
        k++;
    } while (k < 4);
}