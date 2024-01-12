#include<stdio.h>

void printArr(int *arr_ptr, int size_of_array)
{
    for (int i = 0; i < size_of_array; i++)
    {
        printf("%d, ", *arr_ptr);
        arr_ptr++;
    }
}

void main()
{
    int arr[4] = {8, 7, 6, 5};
    int *arr_ptr; 
    arr_ptr = &arr[0];

    printArr(arr_ptr, 4);
}