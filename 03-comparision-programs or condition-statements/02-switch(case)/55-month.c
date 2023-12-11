// Write a menu-driven program to input a choice and print the corresponding month from the year calender.
    // Choice Entered           Print Content
    //      1                       January
    //      2                       February
    //      3                       March
    //      4                       April
    //      5                       May
    //      6                       June
    //      7                       July
    //      8                       August
    //      9                       September
    //      10                      October
    //      11                      November
    //      12                      December
    //   default                   Error Message

#include<stdio.h>
#include<conio.h>
void main()
{
    int choice ;
    printf("Enter a choice from 1-12 tp get the corresponding month from the year calendar: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("It is January!");
            break;
        case 2:
            printf("It is February!");
            break;
        case 3:
            printf("It is March!");
            break;
        case 4:
            printf("It is April!");
            break;
        case 5:
            printf("It is May!");
            break;
        case 6:
            printf("It is June!");
            break;
        case 7:
            printf("It is July!");
            break;
        case 8:
            printf("It is August!");
            break;
        case 9:
            printf("It is September!");
            break;
        case 10:
            printf("It is October!");
            break;
        case 11:
            printf("It is November!");
            break;
        case 12:
            printf("It is December!");
            break;
        // default :
    }
}
