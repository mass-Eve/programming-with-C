// Write a program to compare two strings

#include<stdio.h>

void main()
{
    // string 1
    char str1[100];

    // Taking string 1 from the user
    printf("Enter the string 1:");
    scanf(" %[^\n]s", str1);

    // string 2
    char str2[100];

    // Taking string 1 from the user
    printf("Enter the string 2:");
    scanf(" %[^\n]s", str2);

    // Calculating the length of the string 1
    int i = 0;
    int count1 = 0;
    while (str1[i] != '\0')
    {
        count1++ ;
        i++ ;
    }

    // Calculating the length of the string 2
    i = 0;
    int count2 = 0;
    while (str2[i] != '\0')
    {
        count2++ ;
        i++ ;
    }

    if (count1 != count2)
        printf("Strings are of different length, thus unequal !!\n");
    else{
        int count = 0;
        for (int i = 0; i < count1; i++)
        {
            int isEqual = 0; // True
            for (int j = 0; j < count1; j++)
            {
                if (str1[i] == str2[j])
                {
                    isEqual = 1; // False
                    break;
                }
            }
            if (isEqual == 1){
                count++ ;
            }
            else{
                break;
            }
        }
        if (count == count1)
            printf("Yes, the strings are equal or same\n");
        else
            printf("No, the strings are not equal or same\n");
    }
}