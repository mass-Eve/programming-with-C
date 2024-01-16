// WAP to create a structure and 2 structure variables and copy the value of the first structure variable into the second structure variable

#include<stdio.h>

void main()
{
    // A structure to store numbers
    struct numbers {
        int even_nos;
        int odd_nos;
        int prime_nos;
    };

    // Number 1
    struct numbers n1 = {2, 1, 3};

    // Number 2
    struct numbers n2 = n2;

    printf("Structure 1 elements: \n");
    printf("even no: %d\n", n1.even_nos);
    printf("odd no: %d\n", n1.odd_nos);
    printf("prime no: %d\n", n1.prime_nos);

    printf("-----------\n");

    printf("Structure 2 elements: \n");
    printf("even no: %d\n", n1.even_nos);
    printf("odd no: %d\n", n1.odd_nos);
    printf("prime no: %d\n", n1.prime_nos);
}