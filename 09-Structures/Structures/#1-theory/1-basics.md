# Introduction To Structures

* A *Structure* is a user-defined data type that allows the programmer to group together variables of different data types under a single name. This makes it easier to organize and manage related pieces of data.

* They are also known by *structs*.

* Each element inside the structure is its *member*.

* Unlike an array, a structure can contain elements of different data types.

## But Why Should I Use Structures ?

Lets' understand this with a _Analogy_.
* We are humans. The creator of this repo is a human, the person who is reading and learning from this repo is also a human.

* Now all human beings have certain features or identifications, some of them are completely unique to that person and some are kinda similar. Isn't it ?

* We have height, name, age, gender etc.....

* Now lets' say I want to create a C program storing these piece of information for a single person, what should I do? Simple. Create separate variables, like this .....

```c
char name[100];
int age;
int height;
char gender[1];
```

* What if I want to store the details of 3 such persons ? Simple. Create an array for each detail or property, like this .....

```c
char name[3] = {"John", "Chris", "Christine", "\0"};

int age[3] = {19, 25, 31};

// In cm
int height[3] = {159, 140, 163};

char gender[3] = {'M', 'M', 'F'};
```

* What if I want to store the details of 1000 such peoples ? Certainly, we can do copy paste, can't we ? But what about 10,000 such people ? Maybe, the limit has arrived !!

* In such cases, it is ideal to use a structure. As, a *structure* allows us to group the related variables under one single identification (or name) and we can create multiple instances of that strcuture intead of creating multiple variables with similar looking identifiers, which makes things confusing.

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

## How To Access A Structure ? 
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
}
```

## Accessing Values Inside A Structure Variable

Individual Members of an structure instance can be accessed by using *dot operator* (`.`) .
* In this method, we use the *`dot operator`* to reference a particular member of a structure, using its structure variable.
* Syntax ~ 
```c
printf("<format-specifier>", <structure-variable>.<element-identifier>);
```

Example - 
```c
#include<stdio.h>

void main()
{
    // A structure <book> to store book details
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


# Default values for some elements in the structure ?
**NO**

There is no direct way to initialise default values to some or all elements of the structure.

What does it mean?

Basically, what's been done on <line 12>, is not possible in C !
```c
#include<stdio.h>

void main()
{
    // A structure <book>
    struct book {

        // Name of the book
        // char name[100];

        // Price of the book
        int price = 200;        // Wrong

        // Total pages in the book
        // int pages;
    };

    struct book b1;
}
```

## Assigning values to the elements of a Structure Variable
There are many ways in which we can assign values to a structure variable.

### 01. Direct Initialisation while the Declaration phase.

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

### 02. Assigning values One-by-One

```c
#include<stdio.h>
#include<string.h>

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

    // A structure book variable
    struct book b1 ;
    
    // These two will return error as strings can't be re-assigned
    // b1.name = "Lets' Learn C";
    // b1.publication = "Github Publications";

    // To solve this issue, we'll make use of strcpy() function of the strings library
    strcpy(b1.name, "Lets' Learn C");
    strcpy(b1.publication, "Github Publications");

    b1.isbn = 1234;
    b1.price = 299;
    b1.pages = 400;

    printf("The name of the book: %s\n", b1.name);
    printf("The publication of the book: %s\n", b1.publication);
    printf("The ISBN Number of the book: %d\n", b1.isbn);
    printf("The price of the book: Rs %d\n", b1.price);
    printf("The number of pages in the book are: %d\n", b1.pages);
}
```


## Copying Structure Variables || Structure Assignment

We can also assign a structure variable to another structure variable.
```c
#include<stdio.h>

void main()
{
    // A structure to store numbers
    struct numbers {
        int even_nos;
        int odd_nos;
        int prime_nos;
    };

    struct numbers n1 = {2, 1, 3};
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
```
\ >>> Output
```
Structure 1 elements: 
even no: 2
odd no: 1
prime no: 3
-----------
Structure 2 elements:
even no: 2
odd no: 1
prime no: 3
```

# Important Note
If a structure is initialised zero, all the elements of it are initialised as zero. 
```c
#include<stdio.h>

void main()
{
    struct person {
        char name[100];
        int age;
    };

    struct person p1 = {0};

    printf("name = %s\n", p1.name);
    printf("age = %d\n", p1.age);
}
```