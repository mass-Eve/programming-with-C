// Quesn -- find if a letter is present in the main string
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
    while (1)
    {
        if (string[i] == ch)
        {
            printf("Yes '%c' found in the string '%s'.", ch, string);
            break;
        }
        if (string[i] == '\0') {
            printf("Substring ('%c') not found !!!", ch);
            break;
        }
        i++ ;
    }
}