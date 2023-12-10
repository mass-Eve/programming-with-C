// Write a program to input the measures of the 3 angles of triangle and check if the triangle formed is right-angled or not

#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int p, b, h;
    printf("Entre number1: ");
    scanf("%d", &p);

    printf("Entre number2: ");
    scanf("%d", &b);

    printf("Entre number3: ");
    scanf("%d", &h);

    if ((p > 0 && b > 0 && h > 0) && (p + b) > h && (b + h) > p && (p + b) > h)
    {
        if ((h == sqrt(b * b + p * p)) || (b == sqrt(h * h - p * p)) || (p == sqrt(h * h - b * b)))
        {
            printf("It is a right-angled-triangle.");
        }
        else
        {
            printf("It is triangle but not a right-angled-triangle.");
        }
    }
    else
    {
        printf("Triangle formation not possible.");
    }
}