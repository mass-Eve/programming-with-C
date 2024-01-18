// Check if a string is palindrome string or not.
/*
    string = "john"
    rev_string = "nhoj"
    if (string == rev_string) ? Yes
    else ? No 
*/

#include<stdio.h>
#include<string.h>

void main()
{
    // Main string
    char str[100];
    printf("Enter the string you want to check is palindrome or not: ");
    scanf("%[^\n]", str);

    // Reversed String
    char rev_str[100];

    // Calculating the length of the string
    int slen = 0;
    while (str[slen] != '\0')
    {
        slen++ ;
    }

    // Reversing the Main String
    for (int i = 0; i < slen; i++)
    {
        rev_str[i] = str[slen- (i+1)];
    }
    rev_str[slen] = '\0';
    
    // Condition checking
    int count = 0;
    for (int i = 0; i < slen; i++)
    {
        if (str[i] == rev_str[i])
            count++ ;
    }
    
    // if count of character same in both the strings found to be the same, then it should be equal to slen. And if they are equal, the string is palindrome
    if (count == slen)
        printf("\nYes '%s' is a palindrome string", str);

    else{
        printf("\nNo.... '%s' is not a palindrome string", str);
    }
}