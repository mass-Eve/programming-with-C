// WAP to count the total number of alphabet characters, digits and special characters in a string 

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    
    // Length of the string
    int len = strlen(str);

    // Individual counts for all the three types of values
    int count_alpha = 0, count_digits = 0, count_special = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 32 && str[i] <= 47)
        {
            count_special++ ;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            count_digits++ ;
        }
        else if (str[i] >= 58 && str[i] <= 64)
        {
            count_special++ ;
        }
        else if (str[i] >= 65 && str[i] <= 90)
        {
            count_alpha++ ;
        }
        else if (str[i] >= 91 && str[i] <= 96)
        {
            count_special++ ;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            count_alpha++ ;
        }
        else if (str[i] >= 123 && str[i] <= 126)
        {
            count_special++ ;
        }
    }

    printf("alphas = %d\ndigits = %d\nspecial = %d", count_alpha, count_digits, count_special);
}