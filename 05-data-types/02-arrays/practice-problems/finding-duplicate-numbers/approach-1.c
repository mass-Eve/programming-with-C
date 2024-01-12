// Write a program in C to count the total number of duplicate elements in an array.
// This approach checks all the duplicates in one single run
// But one issue with this approach is that it will give wrong results for 0 as an element.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int n; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // An Array of size (n)
    int array[n];

    // Taking the elements of array as input from the user
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at position %d: ", i);
        scanf("%d", &array[i]);
    }

    // Printing the contents of array before sorting
    printf("Array elements before sorting in ascending order: \n");
    for (int k = 0; k < n; k++)
        printf("%d, ", array[k]);

    // An array storing all the unique elements in the main array.
    int unique[n];

    // A count variable to count the duplicates
    int count = 0;

    // Main program checking the duplicates
    for (int i = 0; i < 6; i++)
    {    
        // To start
        if (i == 0)
        {
            unique[i] = array[i];
            for (int j = i + 1; j < 6; j++)
            {
                if (array[i] == array[j])
                    count++ ;
            }
        }

        else
        {
            int found = 0;
            for (int j = 0; j < 6; j++)
            {
                if (array[i] == unique[j])
                {
                    found = 1;
                }
            }

            if (found == 0)
            {
                unique[i] = array[i];
                for (int j = i + 1; j < 6; j++)
                {
                    if (array[i] == array[j])
                        count++ ;
                }
            }
        }
    }

    printf("\nNo of duplicates found are = %d", count);
}