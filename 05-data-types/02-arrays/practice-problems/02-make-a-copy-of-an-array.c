// Write a program in C to copy the elements of one array into another array.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int n;
    printf("Enter the number of elements in the main array: ");
    scanf("%d", &n);

    // This is our main array
    int main_array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at %d position : ");
        scanf("%d", &main_array[i]);
    }

    // Printing the elements of the main array
    printf("Elements in the main array are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", main_array[i]);
    }

    // Copy Array, assuming exact copy!
    int copy_array[n];
    for (int i = 0; i < n; i++)
    {
        copy_array[i] = main_array[i];
    }

    // Printing the elements of the copied array
    printf("Elements in the copied array are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", copy_array[i]);
    }

    // getch();
}