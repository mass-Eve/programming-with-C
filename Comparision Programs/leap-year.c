// Write a program to find which year is a leap year

#include<stdio.h>
#include<conio.h>
void main()
{
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    
        if (year % 400 == 0)
            printf("It is a leap year!");
        else
            printf("It is not a leap year!");
    else
        printf("It is not a leap year!");

}