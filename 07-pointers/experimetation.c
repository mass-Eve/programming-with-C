#include<stdio.h>

void main()
{
    int roll = 6;
    int *roll_pointer = &roll;

    printf("value of rollno: %d\n", roll);
    printf("value of rollno's address: %p\n", roll_pointer);
    printf("value of rollno using pointer: %d\n", *roll_pointer);
}