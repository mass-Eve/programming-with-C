#include<stdio.h>

// function declaration + its definition
// A function to add two numbers and print it on the console
int sum(int num1, int num2)
{
    printf("num1 = %d\nnum2 = %d", num1, num2);
}

void main()
{
    sum(4, 6);
}