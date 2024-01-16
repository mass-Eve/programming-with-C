# Nested Structures

* Nested structures in C refer to the practice of defining a structure within another structure. 

* This allows us to create a hierarchical or nested relationship between different data structures. 

* There are generally two parts in *nested structure*. 
    01. Inner Structure(s)
    02. Outer Structure(s)

* We create two or more structures where the first structure or the starting structures are the inner structures and the last structure is the outer structure utilising the power of all the above structures.

* The members of the inner structure are the part of outer structure, forming a composite structure as a whole.

* And there can be more nested-ness obviosuly.

Here's a simple example to illustrate the concept of nested structures:

```c
#include <stdio.h>

// Define an inner structure storing the address of a person
struct Address {

    // District name
    char district[50];
    
    // State Name
    char state[50];

    // Area Pin Code
    int pin_code;
};

// Define an outer structure <Person> containing the inner structure <Address> to utilise the members of it.
struct Person {

    // Name of the person
    char name[50];

    // Age of the person
    int age;

    // Address of the person
    struct Address address; // Nested structure
};

int main() 
{
    // Declare a variable of the outer structure
    struct Person person1;

    // Access and modify members of the nested structures
    strcpy(person1.name, "John");
    person1.age = 25;
    
    // Access and modify members of the nested structure (Address)
    strcpy(person1.address.street, "Main street");
    strcpy(person1.address.city, "City);
    person1.address.pin_code = 12345;

    // Display information
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Address: %s, %s, %d\n", person1.address.street, person1.address.city, person1.address.pin_code);

    return 0;
}
```