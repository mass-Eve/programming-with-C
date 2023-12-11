// Write a program to enter the type of room (AC | Non-AC), and the no of days of stay and find the total rent to be paid at the check-out based on the following set of rules -

//   Stay (in days)      AC Room        Non AC Room
//     < 10 days         5000/day        3000/day
//   Next 20 days        4500/day        2800/day
//   Next 50 days        3500/day        2500/day
//     > 80 days         3200/day        2000/day
// Make sure to add room-service charge of Rs 50 on an every-day basis

#include<stdio.h>
#include<conio.h>
void main()
{
    int ndays;
    float room_type, rental_charge, room_service = 50;

    printf("1-for AC Rooms || ");
    printf("2-for Non-AC Rooms \n");
    printf("Enter the room-type: ");
    scanf("%f", &room_type);

    printf("Enter number of days of stay: ");
    scanf("%d", &ndays);

    if (room_type == 1)
    {
        printf("\nYou have choose AC Rooms for %d days.", ndays);
        if (ndays > 0 && ndays <= 10)
        {
            rental_charge = ndays*5000 + ndays*room_service ;
        }
        else if (ndays > 10 && ndays <= 30)
        {
            rental_charge = (10*5000) + (ndays-10)*4500 + (ndays)*room_service ;
        }
        else if (ndays > 30 && ndays <= 80)
        {
            rental_charge = 10*5000 + 20*4500 + (ndays-30)*3500 + (ndays)*room_service ;
        }
        else
        {
            rental_charge = 10*5000 + 20*4500 + 50*3500 + (ndays-80)*3200 + (ndays)*room_service ;
        }
        printf("\nYour rental charges for %d days is Rs. %f", ndays, rental_charge);
    }
    
    else if (room_type == 2)
    {
        printf("\nYou have choose Non-AC Rooms for %d days.", ndays);
        if (ndays > 0 && ndays <= 10)
        {
            rental_charge = ndays*3000 + ndays*room_service ;
        }
        else if (ndays > 10 && ndays <= 30)
        {
            rental_charge = 10*3000 + (ndays-10)*2800 + (ndays)*room_service ;
        }
        else if (ndays > 30 && ndays <= 80)
        {
            rental_charge = 10*3000 + 20*2800 + (ndays-30)*2500 + (ndays)*room_service ;
        }
        else
        {
            rental_charge = 10*3000 + 20*2800 + 50*2500 + (ndays-80)*2000 + (ndays)*room_service ;
        }
        printf("\nYour rental charges for %d days is Rs. %f", ndays, rental_charge);
    }
}