// WAP to print the current position of the cursor

#include<stdio.h>

void main()
{
    // Create a file pointer using the FILE macro
    FILE *fp;

    // Create a variable to store the data from the file
    char dataToBeRead[100];

    // open the file in read mode, make sure the file is at the location
    fp = fopen("1-names.txt", "a");

    // Check if the file is opened successfully
    if (fp == NULL)
    {
        printf("File Can not be opened");
    }

    // If the file is opened -->
    else{
        printf("File opened successfully and ready for operations.....\n");

        int pos;

        // Freshly opened. Therefore, pos == 0
        fseek(fp, 0, SEEK_CUR);
        pos = ftell(fp);
        printf("The pointer is at %d position.\n", pos);


        fputs("\ntest change", fp);
        // Operations Started. Therefore, pos == after operation
        fseek(fp, 0, SEEK_CUR);
        pos = ftell(fp);
        printf("Now the pointer is at %d position.\n", pos);
    }

    printf("Done..... Closing the file!!");

    // Closing the file
    fclose(fp);
}