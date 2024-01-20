// Quesn --> WAP to concatenate two string.
    // str1 = "john "
    // str2 = "doe"
    // concatenated string ==> john doe

#include<stdio.h>
#include<string.h>

void main()
{
    // First String
    char str1[100] = "John";

    // Second String
    char str2[100] = " Doe";

    // Concatenated String
    char str3[200];

    // We want str3 = str1 + str2 ;

    // To get the length of first string
    int len_s1 = 0;
    while (str1[len_s1] != '\0')
    {
        len_s1++ ;
    }
    // printf("%d\n", len_s1);

    // To get the length of second string
    int len_s2 = 0;
    while (str2[len_s2] != '\0')
    {
        len_s2++ ;
    }
    // printf("%d\n", len_s2);

    // Code To Concatenate the two strings into another string
    for (int i = 0; i < len_s1+len_s2; i++)
    {
        if (i < len_s1)
            str3[i] = str1[i];
        else
            str3[i] = str2[i-len_s2];
    }

    // Printing the concatenated string
    for (int i = 0; i < len_s1+len_s2; i++)
    {
        printf("%c", str3[i]);
    }
}