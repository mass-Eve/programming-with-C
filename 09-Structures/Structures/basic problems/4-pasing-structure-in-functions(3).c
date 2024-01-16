#include<stdio.h>
#include<string.h>

// A structure <Car> to store the specs of a car
struct Car {
    // A variable to store the name of the car
    char name[100];

    // A variable to store the name of the company of the car
    char company[100];

    // A variable to store the price of the car
    int price;
};

void printContent(struct Car[]);

int main()
{
    struct Car cars[1]; 

    // Details about car 01
    strcpy(cars[0].name, "Car 01");
    strcpy(cars[0].company, "Car Company 01");
    cars[0].price = 1000000;

    // Details about car 02 (you can repeat this for other cars)

    // Call the function to print details of all cars
    printContent(cars);

    return 0;
}

void printContent(struct Car cars[])
{
    for (int i = 0; i < 1; i++) {
        printf("Car %d\n", i+1);
        printf("car name: %s\n", cars[i].name);
        printf("car company: %s\n", cars[i].company);
        printf("car price: %d\n", cars[i].price);
        printf("\n");
    }
}
