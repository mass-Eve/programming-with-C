// WAP to open a text file and append some name into it.

#include<stdio.h>

void main()
{
    // Create a file pointer
    FILE *fp;

    // Create a string array having the data, which has to be appened in the file
    char dataToBeAppended[100] = "using 'a' mode ~ \nJohn \nChristine Palmer \nDennis";

    // Open the file in append mode
    fp = fopen("names3.txt", "a");

    // Check if the file is opened successfully or not!
    if (fp == NULL)
    {
        printf("Can not!\n");
    }
    else{
        printf("Opened...\n");

        // This will append all the data inside the <dataToBeAppended> variable
        fputs(dataToBeAppended, fp);
        fputs("\n", fp);

        // Close the file
        fclose(fp);
    }
}