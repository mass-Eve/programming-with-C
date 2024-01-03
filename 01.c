#include<stdio.h>
void main()
{
    // Addition of a number
    int array[] = {1, 2, 3};
    int *ap = array;

    printf("first element: %d\n", *ap);
    printf("second element: %d\n ", *(ap+1));
    printf("third element: %d\n", *(ap+2));

    // Subtraction of a number
    int array2[] = {1, 2, 3};
    int *ap2 = &array2[2];

    printf("third element: %d\n", *(ap2));
    printf("second element: %d\n ", *(ap2-1));
    printf("first element: %d\n", *(ap2-2));

    // Addition & Subtraction of Pointers of same type
    int array3[] = {1, 2, 3};
    int *ap3 = array3;
    
    printf("1 - 2 = %d, using indexing\n", array3[0] - array3[1]);
    printf("1 - 2 = %d, using pointers\n", *ap3 - *(ap3+1));

    printf("1 + 2 = %d, using indexing\n", array3[0] + array3[1]);
    printf("1 + 2 = %d, using pointers\n", *ap3 + *(ap3+1));

    // Comparision of pointers of same type
    int array4[] = {1, 2, 3};
    int *ap4 = array4;

    printf("1 > 2 : using array indexing\n");
    if (array4[0] > array4[1])
        printf("Yes\n");
    else
        printf("No\n");

    printf("1 > 2 : using array pointer\n");
    if (*ap4 > *(ap4+1))
        printf("Yes\n");
    else
        printf("No\n"); 
}