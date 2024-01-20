// WAP to create a structure Car and a structure array variable to store the deatils of 5 cars in it. Pass this structure's members into a user defined function body to print them.

#include<stdio.h>
// #include<conio.h>
#include<string.h>

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

void printContent(struct Car);

void main()
{
    struct Car car1;

    // Details about car 01
    strcpy(car1.name, "Car 01");
    strcpy(car1.company, "Car Company 01");
    car1.price = 1000000;

    printContent(car1);

}

void printContent(struct Car car1)
{
    printf("car name: %s\n", car1.name);
    printf("car company: %s\n", car1.company);
    printf("car price: %d\n", car1.price);
}