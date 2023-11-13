// WAP to check if a number is a single digit number

#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("Entre a number: ");
    scanf("%d", &num);

    if ((num / 10) >= 1 && (num / 10) <= 9)
    {
        printf("\nYes");
    }
    else
    {
        printf("\nFalse");
    }
}