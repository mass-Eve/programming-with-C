// Write a menu-driven program to do the following thing
    // Choice Entered           Print Content
    //      1                       BCA
    //      2                       MCA
    //      3                       MBA
    //   default                   Error Message

#include<stdio.h>
#include<conio.h>
void main()
{
    int choice ;
    printf("Enter a choice from 1-3 to get a available course name: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("BCA.\n");
            break;
        case 2:
            printf("MCA.\n");
            break;
        case 3:
            printf("MBA.\n");
            break;
        default :
            printf("Check Your Input Please!\n");
    }
}
