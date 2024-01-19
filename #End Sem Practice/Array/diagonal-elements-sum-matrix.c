// Sum the elements present on the diagonal of a square matrix

// Include the necessary the header files
#include<stdio.h>
#include<conio.h>

// Function Prototyping - a function to return the sum of the elements at the diagonal of a square matrix
int Sum(int *arr, int size);

void main()
{
    int n;
    printf("Enter the size of the array. \nFor example, for a 2x2 matrix, input 2 : ");
    scanf("%d", &n);

    // int sqm[3][3] = 
    // {
    //     {2 , 2, 2},
    //     {2 , 2, 2},
    //     {2 , 2, 2}
    // };
    int sqm[4][4] = 
    {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}
    };
/*

*/

    // printf("Enter the elements of the {%dx%d} matrix here: \n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the elements of row %d: ", i+1);
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("Enter element %d", i+1);
    //     }
    //     printf("\n");
    // }

    int sum = Sum(&sqm[0][0], n);

    printf("The sum of the elements on the diagonal of this {%dx%d} matrix is : %d", n, n, sum);

    // getch();
}


int Sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + size*i + i);
    }
    return sum;
}