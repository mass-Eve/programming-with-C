// WAP to create a structure Car and a structure array variable to store the deatils of 5 cars in it. Pass this structure's members into a user defined function body to print them.

#include<stdio.h>
// #include<conio.h>
#include<string.h>

void printContent(char * name, char * company, int price)
{
    printf("\nSpecs Of the Car are as follows: \n");

    printf("\nCar name: %s", name);
    printf("\nCar company: %s", company);
    printf("\nCar price: %d", price);
    printf("\n");
}

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
    };

    struct Car car[1];

    // Details about car 01
    strcpy(car[0].name, "Car 01");
    strcpy(car[0].company, "Car Company 01");
    car[0].price = 1000000;

    printContent(car[0].name, car[0].company, car[0].price);

}