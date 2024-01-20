// WAP to input an array of length n and find the minimum and maximum element in the array. 

#include<stdio.h>
// #include<conio.h>

void main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // An Array of n elements
    int array[n];

    // A variable in which the minimum element in the array will be stored
    int min = 0;

    // A variable in which the maximum element in the array will be stored
    int max = 0;

    // Taking each element as input from the user
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at position %d : ", i);
        scanf("%d", &array[i]);
    }

    printf("The elements of the array are as follows: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", array[i]);
    }

    // find(Max)
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    // find(Min)
    for (int i = 0; i < 5; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    printf("\nThe maximum element in the array is %d\n", max);
    printf("The minimum element in the array is %d\n", min);

    // getch();
}