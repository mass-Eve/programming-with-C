#include<stdio.h>

void reverseArray(int *a, int *b, int l)
{
    for (int i = 0; i < l; i++)
    {
        *(b + i) = *(a + l - (i + 1));
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
    
    int rev[n];
    
    reverseArray(arr, rev, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", rev[i]);
    }
}