// Create a file and read the contents of that file

#include<stdio.h>

void main()
{
    // Create a file pointer using the FILE macro
    FILE *fp;

    // Create a variable to store the data from the file
    char dataToBeRead[100];

    // open the file in read mode, make sure the file is at the location
    fp = fopen("2-names.txt", "r");

    // Check if the file is opened successfully
    if (fp == NULL)
    {
        printf("File Can not be opened!!!");
    }

    // If the file is opened -->
    else{
        printf("File opened successfully and ready for operations.....\n");

        // Read the content until you get a NULL character 
        while ( fgets(dataToBeRead, 100, fp) != NULL )
        {
            printf("%s", dataToBeRead);
        }

        // An indication that the data is completed
        printf("\nData Ended !!");
        printf("\nClosing the file....");
    }

    // Closing the file
    fclose(fp);
}