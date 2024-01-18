#include <stdio.h>

int strLen(char *s)
{
    int count = 0;
    while (*s != '\0')
    {
        count++ ;
        *s++ ;
    }
    return count;
}

void reverseString(char *a, char *b, int len)
{
    for (int i = 0; i < len; i++)
    {
        *(b+i) = *(a + len - (i + 1));
    }
    *(b+len) = '\0';
}

int checkPalindrome(char *a, char *b, int len)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (*(a+i) == *(b+i))
            count++ ;
        else
            break;
    }
    if (count == len)
        return 1;
    else
    return 0;
}

void main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    char rev[100];
    
    int len = strLen(str);

    reverseString(str, rev, len);
    
    int res = checkPalindrome(str, rev, len);
    
    if (res == 1)
        printf("Yes");
    else
        printf("No");
}