#include<stdio.h>
int sum(int num1, int num2)
{
    return (num1 + num2);
}

void main()
{
    int s, a, b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);

    s = sum(a, b);

    printf("The sum of %d and %d is %d", a, b, s);
}