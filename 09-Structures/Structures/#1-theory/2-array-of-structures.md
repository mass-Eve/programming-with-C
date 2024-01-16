# Arrays Of Structures

This is another funcionality given in C language which enables the programmer to store multiple instances of a structure type variable into an array.

Lets' understand it with some illustrations ~

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

# Accessing Elements Of An Array Of Structures

*It is best done using looping statements, but we can always use the normal method as well!!*

## *accessing using for loop*

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

## *accessing using while loop*

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

## *using do-while loop*

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

# Assigning values to the elements of a Structure Array

## *using for loop*

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

## *using while loop*

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

## *using do-while loop*

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