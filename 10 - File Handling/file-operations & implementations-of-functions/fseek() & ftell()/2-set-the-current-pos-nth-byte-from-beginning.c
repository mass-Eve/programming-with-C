#include<stdio.h>

void main()
{
    // Create a file pointer using the FILE macro
    FILE *fp;

    // Create a variable to store the data from the file
    char dataToBeRead[100];

    // open the file in read mode, make sure the file is at the location
    fp = fopen("2-names.txt", "a");

    // Check if the file is opened successfully
    if (fp == NULL)
    {
        printf("File Can not be opened");
    }

    // If the file is opened -->
    else{
        printf("File opened successfully and ready for operations.....\n");

        // fputs("test", fp);

        // Set the file pointer to 10th byte
        fseek(fp, 10, SEEK_SET);

        int pos;
        pos = ftell(fp);

        printf("The pointer is at %d position.\n", pos);
    }

    printf("Done..... Closing the file!!");

    // Closing the file
    fclose(fp);
}