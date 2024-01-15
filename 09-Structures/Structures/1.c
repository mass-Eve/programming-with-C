// #include<stdio.h>
// #include<string.h>

// void main()
// {
//     // A structure <book>
//     struct book {

//         // Name of the book
//         char name[100];

//         // publication of the book
//         char publication[100];

//     };

//     struct book books[3] ;

//     strcpy(books[0].name, "Lets' Learn C");
//     strcpy(books[0].publication, "Github Publications");

//     strcpy(books[1].name, "Lets' Learn Python");
//     strcpy(books[1].publication, "Github Publications");

//     strcpy(books[2].name, "Python Notes");
//     strcpy(books[2].publication, "Github Publications");

//     for (int i = 0; i < 3; i++)
//     {
//         printf("The name of the book: %s\n", books[i].name);
//         printf("The publication of the book: %s\n", books[i].publication);
//         printf("\n");
//     }
// }

#include<stdio.h>

void main()
{
    // A structure <book>
    struct book {

        // Name of the book
        // char name[100];

        // Price of the book
        int price;

        // Total pages in the book
        int pages;
    };

    struct book b1 = {299, 400};
    struct book *bp = &b1;

    for (int i = 0; i < 2; i++)
    {
        printf("%d, ", bp->price);
        printf("%d, ", bp->pages);
        bp += 1 ;
    }

    // printf("The name of the book: %s\n", b1.name);
    // printf("The price of the book: Rs %d\n", b1.price);
    // printf("The number of pages in the book are: %d\n", b1.pages);
}