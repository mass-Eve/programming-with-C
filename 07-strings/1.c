#include<stdio.h>
#include<string.h>

// Count the length of a string
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

// Reverse the string
void reverseString(char *a, char *b, int len)
{
    for (int i = 0; i < len; i++)
    {
        *(b+i) = *(a + len - (i + 1));
    }
    *(b+len) = '\0';
}

void main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    char rev[100];
    
    int len = strLen(str);

    reverseString(str, rev, len);
    
    printf("%s", rev);
}