// WAP to input an Array from the user and separate all the even and odd numbers from this array into two separate (even and odd) arrays.

#include<stdio.h>
// #include<conio.h>

void main()
{
    int n;
    printf("Enter the total number of elements in the array: ");
    scanf("%d", &n);

    // An Array having all the integer elements
    int array[n];

    // Taking each element as input from the user
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at position %d : ", i);
        scanf("%d", &array[i]);
    }

    // Printing all the elements entered by the user
    printf("The elements of the array are as follows: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", array[i]);
    }

    // An array to store all the even numbers
    int even[n];

    // An array to store all the odd numbers
    int odd[n];

    // Individual counters elements to store the count of even and odd numbers.
    // Also, they will come handy when we want to append those elements in the respective even and odd arrays
    int count_even = 0, count_odd = 0, zero_count = 0;

    // Main Loop to iterate through the array
    for (int i = 0; i < n; i++)
    {
        if (array[i] != 0)
        {
            // To check and append all the even integers from the main array to the even array
            if (array[i] % 2 == 0)
            {
                even[count_even] = array[i];
                count_even++ ;
            }

            // To check and append all the odd integers from the main array to the odd array
            else
            {
                odd[count_odd] = array[i];
                count_odd++ ;
            }
        }
        
        // To check zero as element
        else{
            zero_count++ ;
        }
    }

    // Since there is zero bound problem, so we'll print elements till their respective counter only

    printf("\nAll the even integers from the main array are as follows: \n");
    for (int i = 0; i < count_even; i++)
    {
        printf("%d, ", even[i]);
    }

    printf("\nAll the odd integers from the main array are as follows: \n");
    for (int i = 0; i < count_odd; i++)
    {
        printf("%d, ", odd[i]);
    }

    printf("\nThere were %d zero elements in the array.", zero_count);

    // getch();
}