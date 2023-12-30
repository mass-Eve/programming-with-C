// WAP to arrange or sort the elements of an array in ascending order. 

#include<stdio.h>
void main()
{
    int marks[] = {5, 8, 6, -8, 4};
    int *mp;
    mp = marks;

    for (int i = 0; i < sizeof(marks)/4 ; i++)
    {
        for (int j = 0; j < (sizeof(marks)/4 - 1); j++)
        {
            if (*(mp+j) > *(mp+j+1))
            {
                int temp;
                temp = *(mp+j);
                *(mp+j) = *(mp+j+1);
                *(mp+j+1) = temp;
            }
        }
    }
    for (int i = 0; i < (sizeof(marks)/4); i++)
    {
        printf("array value using pointer: %d\n", marks[i]);
    }   
}