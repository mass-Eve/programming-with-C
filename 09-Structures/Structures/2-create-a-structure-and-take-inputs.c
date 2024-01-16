// WAP to create a structure Car to store the details of a car and a structure variable to store the details of 5 cars and take those details as input from the user using loop

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
    };

    int n;
    printf("Enter the number of cars you want to add in your wishlist: ");
    scanf("%d", &n);

    struct Car car[n];

    // taking inputs
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details for car [%d] here: \n", i+1);

        printf("Enter the car name: ");
        scanf(" %[^\n]s", car[i].name);
        // scanf("%99s", car[i].name);
        // gets(car[i].name);
        
        printf("Enter the car company name: ");
        scanf(" %[^\n]s", car[i].company);
        // gets(car[i].company);

        printf("\n");
    }

    // printing the details
    for (int i = 0; i < n; i++)
    {
        printf("Details of Car [%d]: \n", i+1);
        printf("Car : %s\n", car[i].name);
        printf("Car Company: %s\n", car[i].company);
    }

    // getch();
}