// Write a menu-driven program to input a integer as a choice and print the corresponding number in english alphabet.
    // Choice Entered           Print Content
    //      0                       Zero
    //      1                       One
    //      2                       Two
    //      3                       Three
    //      4                       Four
    //      5                       Five
    //      6                       Six
    //      7                       Seven
    //      8                       Eight
    //      9                       Nine
    //   default                   Error Message

#include<stdio.h>
#include<conio.h>
void main()
{
    int choice ;
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        // default :

    }
}