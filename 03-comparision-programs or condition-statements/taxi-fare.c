#include<stdio.h>
#include<conio.h>
void main()
{
    float distance, fare;
    printf("Enter the distance, in kms: ");
    scanf("%f", &distance);

    if (distance > 0 && distance <= 10)
    {
        fare = 100;
    }
    else if (distance > 10 && distance <= 30)
    {
        fare = 100 + (distance-10)*8 ;
    }
    else if (distance > 30 && distance <= 90)
    {
        fare = 100 + 20*8 + (distance-30)*7 ;
    }
    else if (distance > 90)
    {
        fare = 100 + 20*8 + 60*7 + (distance-90)*4 ;
    }
    else{
        printf("Check your inputs!\n");
    }
    printf("Your taxi-fare comes out to be Rs. %f.", fare);
}