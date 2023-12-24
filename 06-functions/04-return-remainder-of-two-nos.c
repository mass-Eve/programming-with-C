#include<stdio.h>
int quotient(int num1, int num2)
{
    return (num1 % num2);
}

void main()
{
    int s, a, b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);

    s = quotient(a, b);

    printf("%d on getting divided by %d gives %d as quotient.", a, b, s);
}