// Concatenate two strings

#include <stdio.h>
#include <string.h>

// A function to calculate the length of a string and return it to the variable.
int stringLength(char *a)
{
    // to store the length in
    int count = 0;
    while (*a != '\0')
    {
        count++ ;
        *a++ ;
    }
    // returning the length
    return count;
}

// A function to concatenate two strings
void concateStrings(char *a, char *b, char *c, int l1, int l2)
{
    for (int i = 0; i < (l1+l2); i++)
    {
        if (i < l1)
            *(c + i) = *(a + i);
        else
            *(c + i) = *(b + i - l1);
    }
}

void main() 
{
    // String 1
    char str1[100] ;
    printf("Enter the first string: ");
    scanf(" %[^\n]s", str1);

    // String 2
    char str2[100] ; 
    printf("Enter the second string: ");
    scanf(" %[^\n]s", str2);

    // Length of string 1
    int len_s1 = stringLength(str1);

    // Length of string 2
    int len_s2 = stringLength(str2);

    // Third String in which we'll store the concatenated string
    char str3[200] ;

    // Lets' Concatenate them
    concateStrings(str1, str2, str3, len_s1, len_s2);

    // Printing the first string
    for (int i = 0; i < len_s1 ; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");

    // Printing the second string
    for (int i = 0; i < len_s2; i++)
    {
        printf("%c", str2[i]);
    }
    printf("\n");

    // Printing the Concatenated string
    for (int i = 0; i < len_s1 + len_s2; i++)
    {
        printf("%c", str3[i]);
    }

}