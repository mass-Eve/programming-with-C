#include <stdio.h>

void main()
{
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("Numbers before swapping are --");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Numbers after swapping are --");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
}