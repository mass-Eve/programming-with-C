#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("Entre a number: ");
    scanf("%d", &num);

    if ((4 % num == 0) || (6 % num == 0))
    {
        printf("\nYes");
    }
    else
    {
        printf("\nFalse");
    }
}