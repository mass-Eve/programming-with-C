#include<stdio.h>
void main()
{
    int array[] = {5, 6, -7, 0, -8, 89};

    int length = sizeof(array)/4;
    // printf("%d", length);

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
            if (array[j] < array[i]){
                int temp;
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
    }
    for (int k = 0; k < length; k++)
        printf("%d, ", array[k]);
}