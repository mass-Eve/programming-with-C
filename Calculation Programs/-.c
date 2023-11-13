#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("Entre a number: ");
    scanf("%d", &num);

    if ((num % 9 == 5) && (num % 6 == 4))
    {
        printf("\nYes");
    }
    else
    {
        printf("\nFalse");
    }
}