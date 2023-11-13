// Write a menu-driven program to input a integer and a choice & perform the following task -
    // Choice Entered                   Print Content
    //      1                   find if the number is even or odd
    //      2                   Check if the number is Buzz number or not
    //   default                Error Message


#include<stdio.h>
#include<conio.h>
void main()
{
    int choice, num ;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            if (num % 2 == 0)
            {
                printf("The number is even.");
            }
            else{
                printf("The number is odd.");
            }
            break;
        case 2:
            if (num % 7 == 0 || num % 10 == 7)
            {
                printf("The number is a buzz number.");
            }
            else{
                printf("The number is not a buzz number.");
            }
            break;
        default :
            printf("Please check your inputs.");
    }
}