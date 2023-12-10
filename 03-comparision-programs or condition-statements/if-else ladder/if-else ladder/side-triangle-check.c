// Write a program to input the measures of the 3 sides of triangle and check if triangle formation is possible or not

#include <stdio.h>
#include <conio.h>
void main()
{
    int s1, s2, s3;
    printf("Entre number1: ");
    scanf("%d", &s1);

    printf("Entre number2: ");
    scanf("%d", &s2);

    printf("Entre number3: ");
    scanf("%d", &s3);

    if (s1 > 0 && s2 > 0 && s3 > 0)
    {
        if ((s1 + s2) > s3 && (s2 + s3) > s1 && (s3 + s1) > s2)
        {
            printf("Triangle formation possible!");
        }
        else
        {
            printf("Triangle formation not possible!");
        }
    }
    else
    {
        printf("Triangle formation not possible!");
    }
}