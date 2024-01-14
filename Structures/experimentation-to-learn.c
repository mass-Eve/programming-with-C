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