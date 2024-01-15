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

### Method 1 ~
*using `reference method` statements*
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

### Method 2 ~
*using looping statements*

*__But before that, understand the following things carefully.......__*

01. To use a loop to iterate through a structure variable, we have to create a structure variable which is an array and not a simple data variable.

02. When creating a structure variable which is also an array, things work a little different than the usual one and understanding them without an example is impossible. So here is one example to understand it.
```c
// A simple array to store the details about a book
struct book {
    char name[100];
    int price;
    int pages;
};
```
Now when we create a structure variable, like this 
```c
struct book b1;
```
Certainly, we want to say that *"we are creating a variable which will store details of book 1 and these details will be according to the elements in the structure `book`", isn't it?*

But when we create a structure variable which is also an array, like this 
```c
struct book b1[4];
```
From the above declaration, the compiler understand it as ~ "*You have created an array from a structure `book`, and each element of this array will be a structure variable, and the structure is `book`.*"

I know it might be a bit confusing, but the following ilustration will make it clear.
```c
// A simple array to store the details about a book
struct book {
    char name[100];
    int price;
    int pages;
};

// Suppose it to be a book carton containing 5 books
struct book b[5];

               b[0]                  b[1]                  b[2]                  b[3]                  b[4]
b == { {name, price, pages}, {name, price, pages}, {name, price, pages}, {name, price, pages}, {name, price, pages} }

```

In this way, there are `book0`, `book1`, `book2`, `book3`, `book4` ; inside the `b book` array

Enough Information !!! Lets' move to the main topic ~

#### Method 2(a) - *accessing using for loop*

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

    // Book Carton 1
    struct book b1[3] = {{"Learn C", 299, 400}, {"Learn Python", 350, 341}, {"Learn Markdown", 150, 83}};

    for (int i = 0; i < 3; i++)
    {
        printf("name of the book: %s\n", b1[i].name);
        printf("price of the book: %d\n", b1[i].price);
        printf("total pages in the book: %d\n", b1[i].pages);
        printf("\n");
    }
}
```

#### Method 2(b) - *accessing using while loop*

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

    // Book Carton 1
    struct book b1[3] = {{"Learn C", 299, 400}, {"Learn Python", 350, 341}, {"Learn Markdown", 150, 83}};

    int i = 0;
    while (i < 3)
    {
        printf("name of the book: %s\n", b1[i].name);
        printf("price of the book: %d\n", b1[i].price);
        printf("total pages in the book: %d\n", b1[i].pages);
        printf("\n");
        i++ ;
    }
}
```

#### Method 2(c) - *accessing using do-while loop*

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

    // Book Carton 1
    struct book b1[3] = {{"Learn C", 299, 400}, {"Learn Python", 350, 341}, {"Learn Markdown", 150, 83}};

    int i = 0;
    do {
        printf("name of the book: %s\n", b1[i].name);
        printf("price of the book: %d\n", b1[i].price);
        printf("total pages in the book: %d\n", b1[i].pages);
        printf("\n");
        i++ ;
    } while (i < 3);
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

## Assigning values to the elements of a Structure
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

### 03. Assigning Values Using Looping Statements

#### *using for loop*

```c
#include<stdio.h>

void main()
{
    // A structure <book>
    struct book {

        // Name of the book
        char name[100];

        // publication of the book
        char publication[100];
    };

    struct book books[3] ;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name of the book %d: ", i);
        gets(books[i].name);
        printf("Enter the publication of the book %d: ", i);
        gets(books[i].publication);
        printf("\n");
    }

    
    for (int i = 0; i < 3; i++) 
    {
        printf("name of the book %d: %s\n", i, books[i].name);
        printf("publication of the book %d: %s\n", i, books[i].publication);
        printf("\n");
        i++ ;
    }
}
```

#### *using while loop*

```c
#include<stdio.h>

void main()
{
    // A structure <book>
    struct book {

        // Name of the book
        char name[100];

        // publication of the book
        char publication[100];
    };

    struct book books[3] ;

    int i = 0;
    while (i < 3)
    {
        printf("Enter the name of the book %d: ", i);
        gets(books[i].name);
        printf("Enter the publication of the book %d: ", i);
        gets(books[i].publication);
        printf("\n");

        i++ ;
    }

    i = 0;
    while (i < 3)
    {
        printf("name of the book %d: %s\n", i, books[i].name);
        printf("publication of the book %d: %s\n", i, books[i].publication);
        printf("\n");

        i++ ;
    }
}
```

#### *using do-while loop*

```c
#include<stdio.h>

void main()
{
    // A structure <book>
    struct book {

        // Name of the book
        char name[100];

        // publication of the book
        char publication[100];
    };

    struct book books[3] ;

    int i = 0;
    do {
        printf("Enter the name of the book %d: ", i);
        gets(books[i].name);
        printf("Enter the publication of the book %d: ", i);
        gets(books[i].publication);
        printf("\n");

        i++ ;
    } while (i < 3);

    i = 0;
    do {
        printf("name of the book %d: %s\n", i, books[i].name);
        printf("publication of the book %d: %s\n", i, books[i].publication);
        printf("\n");
        i++ ;
    } while (i < 3);
}
```