# Introduction To Structures

* A *Structure* is a user-defined data type that allows the programmer to group together variables of different data types under a single name. This makes it easier to organize and manage related pieces of data.

* They are also known by *structs*.

* Each element inside the structure is its *member*.

* Unlike an array, a structure can contain elements of different data types.

## But Why Should I Use Structures ?

Lets' understand this with a _Analogy_.
* We are humans. The creator of this repo is a human, the person who is reading and learning from this repo is also a human.
* Now all human beings have certain features or identifications. Isn't it ?
* We have height, name, age, gender etc.....
* Now lets' say I want to create a C program storing these piece of information for a single person, what should I do? Simple. Create separate variables, like this .....

```c
char name[100];
int age;
int height;
char gender[1];
```

* What if I want to store the details of 3 such persons ? Simple. Create an array, like this .....

```c
char name[3] = {"John", "Chris", "Christine", "\0"};

int age[3] = {19, 25, 31};

// In cm
int height[3] = {159, 140, 163};

char gender[3] = {'M', 'M', 'F'};
```

* What if I want to store the details of 1000 such peoples ? Certainly, we can do copy paste, can't we ? But what about 10,000 such people ? Maybe, the limit has arrived !!

* In such cases, it is ideal to use a structure. A *structure* allows us to group the related variables into one and we can create multiple instances of that strcuture intead of creating multiple variables with similar looking identifiers, which makes things confusing.

## Creating Structures

The syntax to create a structure in C is as follows ~

* To declare a structure, we use the `struct` keyword.


```c
struct <identifier>
{
    // elements

    // An integer
    int <identifier>;

    // A floating point value
    float <identifier>;

    // A character constant
    char <identifier> = '';

    // A character array
    char <identifier>[] ;

    // An integer array
    int <identifier>[] ;
};
```

Some practical usecases ~

```c
// Create a structure for a Person

struct Person {
    char name[100];
    char gender[1];
    int height;
    int age;
};
```

```c
// Create a structure for a car

struct Car {
    char company[100];
    char name[100];
    int price;
    int mileage;
    int release_year;
};
```

```c
// Create a structure to store student data for an exam

struct Student {

    // To store the name
    char sname[100];

    // To store the grade of the student
    char kaksha[2];

    // To store the section
    char section;

    // marks of five subjects
    int marks[5];
};
```

```c
// Create a structure to store book details

struct book {
    char name[100];
    char publication[100];
    int publication_year;
    int isbn;
    int pages;
    int price;
};
```

Okay, that was enough about creating structures. Lets' move to the next topic.....

## What about actually using them ? How to implement them ? How To Access A Structure ? 
Lets' see how can we use a structure.
* We can create a `structure <identifier> variable` to use that structure
```c
// WAP to create a book using a Structure

#include<stdio.h>

void main()
{
    // A structure <book>
    struct book {

        // Name of the book
        char name[100];

        // publication of the book
        char publication[100];

        // ISBN number of the book
        int isbn;

        // Price of the book
        int price;

        // Total pages in the book
        int pages;
    };

    // Lets' use the above structure to create a book 

    // Now a book has been created and all the variables declared inside the structure are now can be used to store the details of this book without even creating any new variable 
    struct book b1 = {"Lets' Learn C", "Github Publications", 1234, 299, 400};

    printf("The name of the book: %s\n", b1.name);
    printf("The publication of the book: %s\n", b1.publication);
    printf("The ISBN Number of the book: %d\n", b1.isbn);
    printf("The price of the book: Rs %d\n", b1.price);
    printf("The number of pages in the book are: %d\n", b1.pages);

}
```

## Accessing Values Inside A Structure Variable
### Method 1 ~
using `printf()` statements

```c
#include<stdio.h>

void main()
{
    // A structure <book>
    struct book {

        // Name of the book
        char name[100];

        // Price of the book
        int price;

        // Total pages in the book
        int pages;
    };

    struct book b1 = {"Lets' Learn C", "Github Publications", 1234, 299, 400};

    printf("The name of the book: %s\n", b1.name);
    printf("The publication of the book: %s\n", b1.publication);
    printf("The ISBN Number of the book: %d\n", b1.isbn);
    printf("The price of the book: Rs %d\n", b1.price);
    printf("The number of pages in the book are: %d\n", b1.pages);
}
```

### Method 2 ~
using for loop

```c

```









# Default values 