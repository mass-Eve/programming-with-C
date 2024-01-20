// Write a program in C to count the total number of duplicate elements in an array.
// This approach checks one duplicate at a time.

#include <stdio.h>
// #include<conio.h>

void main()
{
    int n;  
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    int arr[n];  // an array of size n to store integer values
    
    // Prompt the user to input n elements into the array
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);  // Read the input and store it in the array
    }

    // Check for duplicate elements in the array using nested loops
    int ctr = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                ctr++;  // Increment the duplicate counter if a duplicate is found
                break;  // Exit the inner loop as soon as a duplicate is found
            }
        }
    }

    // Display the total number of duplicate elements found in the array
    printf("Total number of duplicate elements found in the array: %d\n", ctr);

    // getch();
}