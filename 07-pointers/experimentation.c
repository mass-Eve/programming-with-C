#include<stdio.h>

void main()
{
    // int roll = 6;
    // int *roll_pointer = &roll;

    // printf("value of rollno: %d\n", roll);
    // printf("value of rollno's address: %p\n", roll_pointer);
    // printf("value of rollno using pointer: %d\n", *roll_pointer);

    // An array storing the marks of a student
    // int marks[] = {5, 8, 6, -8, 4};

    // A pointer having the address of the first element of the array <marks>
    // int *mp;
    // mp = marks;

    // for (int i = 0; i < (sizeof(marks)/4); i++)
    // {
    //     printf("array value using pointer: %d\n", *mp);
    //     printf("it memory address: %p\n", mp);
    //     mp++;
    // }   


    int marks[] = {5, 8, 6, -8, 4};
    // int *mp;
    // mp = marks;

    // for (int i = 0; i < (sizeof(marks)/4); )

    // descending
    // for (int i = 0; i < sizeof(marks)/4 ; i++)
    // {
    //     for (int j = 0; j < sizeof(marks)/4 ; j++)
    //     {
    //         if (marks[i] > marks[j])
    //         {
    //             int temp;
    //             temp = marks[i];
    //             marks[i] = marks[j];
    //             marks[j] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < (sizeof(marks)/4); i++)
    // {
    //     printf("array value using pointer: %d\n", marks[i]);
    // }   


    // ascending
    for (int i = 0; i < sizeof(marks)/4 ; i++)
    {
        for (int j = 0; j < sizeof(marks)/4 ; j++)
        {
            if (marks[i] < marks[j])
            {
                int temp;
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }
    for (int i = 0; i < (sizeof(marks)/4); i++)
    {
        printf("array value using pointer: %d\n", marks[i]);
    }   


}