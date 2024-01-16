// WAP to create a structure Car and a structure array variable to store the deatils of 5 cars in it.

#include<stdio.h>
// #include<conio.h>
#include<string.h>

void main()
{
    // A structure <Car> to store the specs of a car
    struct Car {
        // here comes some specs

        // A variable to store the name of the car
        char name[100];

        // A variable to store the name of the company of the car
        char company[100];

        // A variable to store the price of the car
        int price;

        // A variable to store the mileage of the car
        int mileage;

        // A variable to store the <top speed> of the car
        int top_speed;
    };

    struct Car car[5];

    // Details about car 01
    strcpy(car[0].name, "Car 01");
    strcpy(car[0].company, "Car Company 01");

    car[0].price = 1000000;
    car[0].mileage = 50;
    car[0].top_speed = 100;

    printf("\nSpecs Of Car 01:");
    printf("\nCar 01 name: %s", car[0].name);
    printf("\nCar 01 company: %s", car[0].company);
    printf("\nCar 01 price: %d", car[0].price);
    printf("\nCar 01 mileage: %d", car[0].mileage);
    printf("\nCar 01 top speed: %d", car[0].top_speed);
    printf("\n");
    
    printf("\n");

    // Details about car 02
    strcpy(car[1].name, "Car 02");
    strcpy(car[1].company, "Car Company 02");

    car[1].price = 1000000;
    car[1].mileage = 50;
    car[1].top_speed = 100;

    printf("\nSpecs Of Car 02:");
    printf("\nCar 02 name: %s", car[1].name);
    printf("\nCar 02 company: %s", car[1].company);
    printf("\nCar 02 price: %d", car[1].price);
    printf("\nCar 02 mileage: %d", car[1].mileage);
    printf("\nCar 02 top speed: %d", car[1].top_speed);
    
    printf("\n");

    // Details about car 03
    strcpy(car[2].name, "Car 03");
    strcpy(car[2].company, "Car Company 03");
    car[2].price = 1000000;
    car[2].mileage = 50;
    car[2].top_speed = 100;

    printf("\nSpecs Of Car 03:");
    printf("\nCar 03 name: %s", car[2].name);
    printf("\nCar 03 company: %s", car[2].company);
    printf("\nCar 03 price: %d", car[2].price);
    printf("\nCar 03 mileage: %d", car[2].mileage);
    printf("\nCar 03 top speed: %d", car[2].top_speed);

    printf("\n");

    // Details about car 04
    strcpy(car[3].name, "Car 04");
    strcpy(car[3].company, "Car Company 04");
    car[3].price = 1000000;
    car[3].mileage = 50;
    car[3].top_speed = 100;

    printf("\nSpecs Of Car 04:");
    printf("\nCar 04 name: %s", car[3].name);
    printf("\nCar 04 company: %s", car[3].company);
    printf("\nCar 04 price: %d", car[3].price);
    printf("\nCar 04 mileage: %d", car[3].mileage);
    printf("\nCar 04 top speed: %d", car[3].top_speed);

    printf("\n");

    // Details about car 05
    strcpy(car[4].name, "Car 05");
    strcpy(car[4].company, "Car Company 05");
    car[4].price = 5000000;
    car[4].mileage = 45;
    car[4].top_speed = 125;


    printf("\nSpecs Of Car 05:");
    printf("\nCar 05 name: %s", car[4].name);
    printf("\nCar 05 company: %s", car[4].company);
    printf("\nCar 05 price: %d", car[4].price);
    printf("\nCar 05 mileage: %d", car[4].mileage);
    printf("\nCar 05 top speed: %d", car[4].top_speed);
}