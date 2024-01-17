// Create a file and append content in that file

#include<stdio.h>

void main()
{
    // Create a file pointer using the FILE macro
    FILE *fp;

    // Create a variable to store the data from the file
    char dataToBeWritten[100] = "Black\nWhite\nGreen\nRed";

    // open the file in read mode, make sure the file is at the location
    fp = fopen("4-colours.txt", "a");

    // Check if the file is opened successfully
    if (fp == NULL)
    {
        printf("File Can not be opened");
    }

    // If the file is opened -->
    else{
        printf("File opened successfully and ready for operations");

        fputs("~Data being written using append mode\n", fp);
        fputs(dataToBeWritten, fp);
        fputs("\n", fp);
    }
    
    // Indication that data is written successfully 
    printf("\nData Written Successfully !!");
    printf("\nFile closed !!");

    // Closing the file
    fclose(fp);
}