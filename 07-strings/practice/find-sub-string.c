#include <stdio.h>
#include <string.h>

// To calculate the length of the string
int strLength(char *s)
{
    int count = 0;
    while (*s != '\0')
    {
        count++ ;
        *s++ ;
    }
    return count;
}

// To find the substring
int findSubStr(char *a, char *b, int l1, int l2)
{
    // Main loop which will iterate through the first string, byte-by-byte
    for (int i = 0; i < l1; i++)
    {
        // A check variable to store the check count. Everytime the character from the subtring matches in the mainString, the check count increases by one.
        int check = 0;

        // This loop will iterate l2 time only. Which means that it will iterate only the number of times there are characters in the subString.
        for (int j = 0; j < l2; j++)
        {
            // This condition checks the presence of substring in the main string
            if ( *(a + i + j) == *(b + j) )
                // if the string matches, increase the check count by 1 
                check++ ;
            else
                // if the string doesn't matches, break out of the loop
                break;
        }

        // check if the value inside check is equal to the length of substring, if yes, return True
        if (check == l2)
            return 1;
    }
    // else return false
    return 0;
}

void main() 
{
    char str[100];
    char subs[100];

    printf("Enter the main string: ");
    scanf("%[^\n]s", str);

    printf("Enter the substring to find: ");
    scanf(" %[^\n]s", subs);
    
    int len1 = strLength(str);
    int len2 = strLength(subs);
    
    int check_status = findSubStr(str, subs, len1, len2);
    
    if (check_status == 1)
        printf("SubString found.....");
    else
        printf("No.....");

}