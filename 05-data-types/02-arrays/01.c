#include<stdio.h>
void main()
{
    int arr1[2][3] = {1, 2, 3, 4};
    int arr2[][4] = {1, 2, 5, 8, 6, 87};

    printf("%d\n", arr2[0][0]);
    printf("%d\n", arr2[0][1]);
    printf("%d\n", arr2[0][2]);
    printf("%d\n", arr2[0][3]);
    printf("%d\n", arr2[0][4]);
    printf("%d\n", arr2[1][4]);
}