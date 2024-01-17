#include<stdio.h>

void main()
{
    // Create a file pointer using the FILE macro
    FILE *fp;

    // Create a variable to store the data from the file
    char dataToBeRead[100];

    // open the file in read mode, make sure the file is at the location
    fp = fopen("2-names.txt", "r+");

    // Check if the file is opened successfully
    if (fp == NULL)
    {
        printf("File Can not be opened");
    }

    // If the file is opened -->
    else{
        printf("File opened successfully and ready for operations.....\n");

        int pos;

        // Set the file pointer to 10th byte
        fseek(fp, 10, SEEK_SET);

        pos = ftell(fp);
        printf("The pointer is at %d position from the beginning.\n", pos);

        printf("Reading file content from %d th byte from the starting:\n", pos);
        while ( fgets(dataToBeRead, 100, fp) != NULL )
        {
            printf("%s", dataToBeRead);
        }
        printf("\n");

        // --------------------------------------------------------------------
        // Set the file pointer to 10th byte
        fseek(fp, 10, SEEK_SET);

        printf("Performing file addition at the starting of the file....\n");
        fputs("test-addition", fp);

        // Set the file pointer to 10th byte
        fseek(fp, 10, SEEK_SET);
        // fseek(fp, 0, SEEK_SET);

        pos = ftell(fp);
        printf("The pointer is again set at %d position from the beginning.\n", pos);

        // char dataToBeRead[100];
        printf("Reading file content from %d th byte from the starting:\n", pos);
        while ( fgets(dataToBeRead, 100, fp) != NULL )
        {
            printf("%s", dataToBeRead);
        }
        printf("\n");
    }

    printf("Done..... Closing the file!!");

    // Closing the file
    fclose(fp);
}