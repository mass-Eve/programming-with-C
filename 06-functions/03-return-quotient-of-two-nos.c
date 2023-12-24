#include<stdio.h>
float quotient(float num1, float num2)
{
    return (num1 / num2);
}

void main()
{
    float s, a, b;
    printf("Enter a:");
    scanf("%f", &a);
    printf("Enter b:");
    scanf("%f", &b);

    s = quotient(a, b);

    printf("%f on getting divided by %f gives %.2f as quotient.", a, b, s);
}