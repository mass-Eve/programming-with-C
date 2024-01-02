// Use Call by Value method of function calling to implement swapping of two numbers.

#include<stdio.h>

int swap(int num1, int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void main()
{
    int a = 15; 
    int b = 30;

    printf("Before Updation\n");
    printf("a: %d\nb = %d\n", a, b);

    swap(a, b);

    printf("After Updation\n");
    printf("a: %d\nb = %d\n", a, b);
}