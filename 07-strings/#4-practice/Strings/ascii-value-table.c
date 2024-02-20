// Print Ascii Values table

#include<stdio.h>

void main()
{
    printf("The Ascii Value Table is as follows ~ \n");
    printf("| Character | ASCII Value | Type Of Character |\n");
    // printf("| Sr. No. | Character | ASCII Value | Type Of Character |\n");
    for (int i = 33; i < 130; i++)
    {
        if (i >= 33 && i <= 47)
        {
            printf("| %c | %d | Special Character |", i, i);
        }
        else if (i >= 48 && i <= 57)
        {
            printf("| %c | %d | Integer Number |", i, i);
        }
        else if (i >= 58 && i <= 64)
        {
            printf("| %c | %d | Special Character |", i, i);
        }
        else if (i >= 65 && i <= 90)
        {
            printf("| %c | %d | Uppercase Alphabets |", i, i);
        }
        else if (i >= 91 && i <= 96)
        {
            printf("| %c | %d | Special Character |", i, i);
        }
        else if (i >= 97 && i <= 122)
        {
            printf("| %c | %d | Lowercase Alphabets |", i, i);
        }
        else if (i >= 123 && i <= 126)
        {
            printf("| %c | %d | Special Character |", i, i);
        }
        printf("\n");
    }
}