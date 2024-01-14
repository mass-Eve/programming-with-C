// WAP to open a file into write mode and add some names into the file

#include<stdio.h>

void main()
{
    // create a file pointer
    FILE *fp;

    // A variable to store all the data that has to be written in the file in the form of an string array
    char dataToBeWritten[100] = "Using 'w' mode ~ \nJohn \nChristine Palmer \nDennis";

    // Open the file in write mode
    fp = fopen("names2.txt", "w");

    // Check if the file is opened successfully or not!!
    if (fp == NULL)
    {
        printf("Can not!\n");
    }
    else{
        printf("Opened...\n");

        // This will write all the data present inside this variable.
        fputs(dataToBeWritten, fp);
        fputs("\n", fp);

        // Close the file
        fclose(fp);
    }
}