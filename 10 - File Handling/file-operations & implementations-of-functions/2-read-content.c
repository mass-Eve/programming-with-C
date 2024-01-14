#include<stdio.h>

void main()
{
    // file pointer
    FILE *fp ;

    char data[100];

    fp = fopen("names.txt", "r");

    if (fp == NULL)
        printf("File can not be opened.\n");
    else{
        printf("File is opened.....\n");

        // Printing the data
        while (fgets(data, 100, fp) != NULL)
        {
            printf("%s", data);
        }

        // Closing the file
        fclose(fp);
    }

}