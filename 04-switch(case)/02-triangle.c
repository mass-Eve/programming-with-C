// Write a menu-driven program to input length and breadth of a rectangle and a choice & perform the following task -
    // Choice Entered                   Print Content
    //      1                   Calculate the area of the triangle
    //      2                   Calculate the perimeter of the triangle
    //   default                Error Message

#include<stdio.h>
#include<conio.h>
void main()
{
    int choice ;
    float l, b, a, p ;
    printf("Enter length of the rectangle: ");
    scanf("%f", &l);
    
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &b);

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            a = l * b ;
            printf("Area of the rectangle is: %f sq unit.\n", a);
            break;
        case 2:
            p = 2*(l + b) ;
            printf("Perimeter of the rectangle is: %f sq unit.\n", p);
            break;
        default :
            printf("Check your inputs once.");
    }
}
