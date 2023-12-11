// Write a menu-driven program to input temperature in Celsius and a choice & perform the following task -
    // Choice Entered                   Print Content
    //      1                   Convert the temperature in Fehrenheit
    //      2                   Convert the temperature in Kelvin
    //   default                Error Message

#include<stdio.h>
#include<conio.h>
void main()
{
    int choice ;
    float c, f, k;

    printf("Enter the tempearture in celsius: ");
    scanf("%f", &c);

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            f = c * (9.0 / 5.0) + 32 ;
            printf("Temperature in fahrenheit is: %f", f);
            break;
        case 2:
            k = c + 273.15 ;
            printf("Temperature in kelvin is: %f", k);
            break;
        default :
            printf("Check your inputs.");
    }
}
