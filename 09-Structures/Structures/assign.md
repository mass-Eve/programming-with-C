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