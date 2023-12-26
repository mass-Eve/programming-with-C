#include <stdio.h>
void main()
{
    int marks[2][2] = 
    {
        {45, 48},
        {39, 31}
    };
    printf("The marks of Student 1 of class 1 : %d\n", marks[0][0]);
    printf("The marks of Student 2 of class 1 : %d\n", marks[0][1]);
    printf("The marks of Student 1 of class 2 : %d\n", marks[1][0]);
    printf("The marks of Student 2 of class 2 : %d\n", marks[1][1]);
}