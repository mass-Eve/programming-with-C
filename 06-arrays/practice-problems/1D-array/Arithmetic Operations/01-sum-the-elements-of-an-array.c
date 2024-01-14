// WAP to print the sum of all the elements in the array

#include<stdio.h>
// #include<conio.h>

void main()
{
    int n;
    printf("Enter the number of terms in the array: ");
    scanf("%d", &n);

    // An Array having n elements
    int array[n] ;

    // Fill the elements in the array using a loop
    for (int i = 0; i < n ; i++)
    {
        printf("Enter the element at %d position : ", i);
        scanf("%d", &array[i]);
    }

    // Print the array on the terminal
    printf("The array is: \n");
    for (int i = 0; i < n ; i++)
    {
        printf("%d, ", array[i]);
    }

    // A variable to calculate our sum 
    int sum = 0;
    for (int i = 0; i < n ; i++)
    {
        // Assignment updation is used in order to retain the value of sum from previous iterations
        sum += array[i];
    }
    printf("\nThe sum of the elements of the array is: %d", sum);

    // getch();
}