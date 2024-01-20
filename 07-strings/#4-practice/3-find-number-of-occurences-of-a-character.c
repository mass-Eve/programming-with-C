// Quesn -- find the total number of occurences of a letter in the main string
//     <main-string> == "john doe"
//     search for 'a' == No
//     search for 'j' == Yes

#include<stdio.h>
#include<string.h>

void main()
{
    // declare the main string
    char string[100];
    printf("Enter the string you want to search in: ");
    gets(string);

    char ch;
    printf("Enter the character you want to search for: ");
    scanf("%c", &ch);

    int i = 0;
    int count = 0;
    while (string[i] != '\0')
    {
        if (string[i] == ch)
        {
            // printf("Yes '%c' found in the string '%s'.", ch, string);
            count++ ;
        }
        i++ ;
    }
    if (count != 0)
    {
        printf("Sub String Found.....\n");
        printf("The total number of occurence of substring ('%c') in the string ('%s') are %d", ch, string, count);
    }
    else{
        puts("Substring not found !!!");
    }
}


/*
my name is anthony gonsalves
*/