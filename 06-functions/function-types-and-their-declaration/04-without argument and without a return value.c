#include<stdio.h>

// A function to input a number and print it on the console. 
int input_num()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You have enetered: %d ", num);
}

void main()
{
    input_num();
}