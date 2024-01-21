#include<stdio.h>

void sortArray(int *a, int l, int sc)
{
    if (sc == 1)
    {
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < l ; j++)
            {
                if (*(a+i) < *(a+j))
                {
                    int temp = *(a + i);
                    *(a+i) = *(a+j);
                    *(a+j) = temp;
                }
            }
        }
    }
    if (sc == 2)
    {
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < l ; j++)
            {
                if (*(a+i) > *(a+j))
                {
                    int temp = *(a + i);
                    *(a+i) = *(a+j);
                    *(a+j) = temp;
                }
            }
        }
    }
}

void main()
{
    int n;
    printf("Enter the total no. of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    int sort_choice;
    printf("Enter sorting choice:\nEnter 1 to sort in ascending order\nEnter 2 to sort in descending order.");
    scanf("%d", &sort_choice);
    
    printf("Array before sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    
    sortArray(arr, n, sort_choice);

    printf("Array after sorting: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
}