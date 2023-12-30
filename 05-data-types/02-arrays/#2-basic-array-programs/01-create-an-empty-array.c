#include <stdio.h>
void main()
{
    int marks[4];
    printf("An array of size 4, that can hold integer values in it, is created....\n");

    // assign marks of student 1 = 40
    marks[0] = 40;

    // assign marks of student 2 = 91
    marks[1] = 91;
    
    // assign marks of student 3 = 86
    marks[2] = 86;
    
    // assign marks of student 4 = 29 
    marks[3] = 29;

    printf("The elements in the marks array are as follows -\n");

    printf("Marks of student 1:\n", marks[0]);
    printf("Marks of student 2:\n", marks[1]);
    printf("Marks of student 3:\n", marks[2]);
    printf("Marks of student 4:\n", marks[3]);
}