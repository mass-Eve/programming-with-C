#include<stdio.h>

void minMax(int *arr, int len, int *min, int *max)
{
    // To get the minimum element
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    *min = arr[len-1];

    // To get the maximum element
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    *max = arr[len-1];
}

void main()
{
    // Number of elements in the array
    int n;
    printf("Enter the number of terms in the array: ");
    scanf("%d", &n);

    // An array of size n
    int array[n];
    int array_copy[n];

    // Taking the elements of the array as input from the user
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        array_copy[i] = array[i];
    }
    
    int min = 0;
    int max = 0;

    printf("The main array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", array[i]);
    }

    minMax(array_copy, n, &min, &max);

    printf("\nThe Minimum element is: %d\n", min);
    printf("The Maximum element is: %d\n", max);
}