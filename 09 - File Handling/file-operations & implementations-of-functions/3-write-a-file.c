#include<stdio.h>

void main()
{
    FILE *fp;

    char dataToBeWritten[100] = "Using 'w' mode ~ \nJohn \nChristine Palmer \nDennis";

    fp = fopen("names2.txt", "w");

    if (fp == NULL)
    {
        printf("Can not!\n");
    }
    else{
        printf("Opened...\n");

        fputs(dataToBeWritten, fp);
        fputs("\n", fp);

        fclose(fp);
    }
}