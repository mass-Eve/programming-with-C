#include<stdio.h>

// A function to input a number and return the square of it.
int sum()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num*num;
}

void main()
{
    int sq;
    sq = sum();
    printf("The square returned by the function is: %d", sq);
}