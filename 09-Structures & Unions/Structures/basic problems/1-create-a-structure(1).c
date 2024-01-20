// WAP to create a structure car to store the specs of a car

#include<stdio.h>
// #include<conio.h>

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

    struct Car car1 = {"Car Name", "Car company", 1000000, 45, 150};

    printf("Car 1 Details >>> \n");

    printf("Car name: %s\n", car1.name);
    printf("Company name: %s\n", car1.company);
    printf("Ex-showroom Price: %d\n", car1.price);
    printf("Mileage: %d\n", car1.mileage);
    printf("Top Speed: %d\n", car1.top_speed);
}