// Write a menu-driven program to input a number and a choice and print the corresponding vowel from english alphabet.
    // Choice Entered           Print Content
    //      1                       a
    //      2                       e
    //      3                       i
    //      4                       o
    //      5                       u
    //   default                   Error Message

#include<stdio.h>
#include<conio.h>
void main()
{
    char choice ;
    printf("Enter choice: ");
    scanf("%c", &choice);

    switch (choice)
    {
        case 'a':
            printf("It is a vowel");
            break;
        case 'e':
            printf("It is a vowel");
            break;
        case 'o':
            printf("It is a vowel");
            break;
        case 'i':
            printf("It is a vowel");
            break;
        case 'u':
            printf("It is a vowel");
            break;
        default :
            printf("Please check your input.");
    }
}