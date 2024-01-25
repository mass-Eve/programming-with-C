#include<stdio.h>

void main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at position %d: ", i);
        scanf("%d", &array[i]);
    }

    int sum;
    printf("Enter the targeted sum value: ");
    scanf("%d", &sum);

    int indice1, indice2;

    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        indice1 = array[i];
        for (int j = 0; j < 5; j++)
        {
            if ((j != i) && (indice1 + array[j] == sum))
            {
                count++ ;
                printf("(%d, %d)", i, j);
                break;
            }
        }
        if (count != 0)
            break;
    }

}