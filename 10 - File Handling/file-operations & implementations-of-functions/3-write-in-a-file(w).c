#include<stdio.h>

void main()
{
    // Create a file pointer using the FILE macro
    FILE *fp;

    // Create a variable to store the data from the file
    char dataToBeWritten[100] = "Black\nWhite\nGreen\nRed";

    // open the file in read mode, make sure the file is at the location
    fp = fopen("3-colours.txt", "w");

    // Check if the file is opened successfully
    if (fp == NULL)
    {
        printf("File Can not be opened");
    }

    // If the file is opened -->
    else{
        printf("File opened successfully and ready for operations");

        fputs(dataToBeWritten, fp);
        fputs("\n", fp);

    }
    
    // Indication that data is written successfully 
    printf("Data Written Successfully !!");
    printf("\nFile closed !!");

    // Closing the file
    fclose(fp);
}