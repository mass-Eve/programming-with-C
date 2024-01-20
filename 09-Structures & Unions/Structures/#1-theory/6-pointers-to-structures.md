# Pointers To Structures

Accessing the elements of a structure using pointers follows a little different syntax.


```c
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

void printContent(struct Car *);

void main()
{
    struct Car car1[1];

    // Details about car 01
    strcpy(car1[0].name, "Car 01");
    strcpy(car1[0].company, "Car Company 01");
    car1[0].price = 1000000;

    printContent(&car1);

}

void printContent(struct Car *car1)
{
    printf("car name: %s\n", car1->name);
    printf("car company: %s\n", car1->company);
    printf("car price: %d\n", car1->price);
}```