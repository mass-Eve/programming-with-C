// 

/*
    when reversing strings, make sure to add null terminator at the end. if you don't do this and print the string normally using printf(), you will acquire a problem. 
    Either you should append the reversed string with a null terminator in the end using `rev_str[slen] = '\0'`, or you should print the rev_str using a loop
*/

#include<stdio.h>
#include<string.h>

void main()
{
    // Main string
    char string[100];
    printf("Enter a string to reverse: ");
    scanf("%[^\n]", string);

    // Calculate the length of the string
    int slen = strlen(string);

    char rev_str[100];

    // Reversing the string
    for (int i = 0; i < slen; i++)
    {
        rev_str[i] = string[slen - (i+1)];
    }
    
    // Adding null character in the reversed character array to make it a string
    rev_str[slen] = '\0';

    printf("Main string: '%s'\n", string);
    printf("Reversed string: '%s'\n", rev_str);
}