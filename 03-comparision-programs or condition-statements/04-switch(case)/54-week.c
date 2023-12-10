// Write a menu-driven program to input a choice and print the corresponding day of the week.
    // Choice Entered           Print Content
    //      1                       Sunday
    //      2                       Monday
    //      3                       Tuesday
    //      4                       Wednesday
    //      5                       Thursday
    //      6                       Friday
    //      7                       Saturday
    //   default                   Error Message

#include<stdio.h>
#include<conio.h>
void main()
{
    int choice ;
    printf("Enter choice from 1-7 to get the corrseponding day of the week: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("It is Sunday.");
            break;
        case 2:
            printf("It is Monday.");
            break;
        case 3:
            printf("It is Tuesday.");
            break;
        case 4:
            printf("It is Wednesday.");
            break;
        case 5:
            printf("It is Thursday.");
            break;
        case 6:
            printf("It is Friday.");
            break;
        case 7:
            printf("It is Saturday.");
            break;
        default :
            printf("Please check your input!");
    }
}
