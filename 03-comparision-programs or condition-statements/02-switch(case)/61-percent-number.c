// Write a menu-driven program to input a number and a choice & perform the following task -
    // Choice Entered                   Print Content
    //      1                   10% of that number
    //      2                   increase that number by 20%
    //   default                Error Message


#include<stdio.h>
#include<conio.h>
void main()
{
    int choice ;
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("10 percent of %f is %f", num, num/10);
            break;
        case 2:
            printf("%f on increasing by 20 percent comes out to be %f", num, num*1.2);
            break;
        default :
            printf("Check your input!");
    }
}
