// Write a menu-driven program to input radius of a circle and a choice & perform the following task -
    // Choice Entered                   Print Content
    //      1                   Calculate the area of the circle
    //      2                   Calculate the perimeter/circumeference of the circle
    //   default                Error Message

#include<stdio.h>
#include<conio.h>
void main()
{
    int choice ;
    float r, a, c;

    printf("Enter the radius: ");
    scanf("%f", &r);

    printf("Choose 1 for calculating area and 2 for caluclating circumference of the circle.");
    printf("Enter a choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            a = 3.14 * r * r;
            printf("The area of the circle is: %f sq.unit.", a);
            break;
        case 2:
            c = 2 * 3.14 * r ;
            printf("The circumference of the circle is: %f sq.unit.", c);
            break;
        default :
            printf("Please check your input!");
    }
}
