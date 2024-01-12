

#include<stdio.h>
// #include<conio.h>

void main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // main array
    int array[n];

    // Taking elements as input from the user
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at position %d: ", i);
        scanf("%d", &array[i]);
    }

    // Printing the contents of main array
    printf("Elements in the main array: \n");
    for (int j = 0; j < n; j++)
        printf("%d, ", array[j]);

    // A reverse array having the elements of the main array in reversed format
    int rev_array[n];

    for (int i = 0; i < n; i++)
    {
        rev_array[i] = array[n - (i + 1)];
    }

    // printing the contents of the rev_array
    printf("\nElements in the reversed array: \n");
    for (int l = 0; l < n ; l++)
    {
        printf("%d, ", rev_array[l] );
    }

    // getch();
}

/*
5 - (4 + 1)
*/