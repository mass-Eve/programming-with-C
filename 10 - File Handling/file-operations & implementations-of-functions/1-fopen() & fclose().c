// WAP to open a text file in "read mode" in a C program and close it.

#include<stdio.h>
#include<stdlib.h>

void main()
{
    // The first step in file handling is to create a file pointer using the FILE macro
    FILE *fp ;

    // Let's open the file in reading mode
    fp = fopen("name.txt", "r");

    // Lets' check if the file is opened successfully or not.
    if (fp == NULL)
    {
        printf("An Error Occurred. The file can not be opened. Closing the program.....");
        exit(0);
    }
    else{
        printf("File opened successfully. Ready for manipulations.....");
    }

    // Let's close the file now.
    fclose(fp);
}