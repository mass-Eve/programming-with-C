#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("Entre a number: ");
    scanf("%d", &num);

    if ((num % 8 == 0) && (num % 11 == 0))
    {
        printf("\nYes");
    }
    else
    {
        printf("\nFalse");
    }
}