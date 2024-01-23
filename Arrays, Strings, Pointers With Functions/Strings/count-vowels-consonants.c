// Count Vowels and consonants in the string

#include<stdio.h>
#include<string.h>

void strAnalysis(char *str, char *vowels ,int len, int *v, int *c, int *s)
{
    for (int i = 0; i < len; i++)
    {
        if (*(str+i) == 32)
        {
            (*s) ++ ;
        }
        for (int j = 0; j < 5; j++)
        {
            if (*(vowels+j) == *(str+i))
            {
                (*v) ++ ;
            }
        }
    }
    (*c) = len - (*v) - (*s) ;
}

void main()
{
    int n;
    printf("Enter the length of the string: ");
    scanf("%d", &n);

    char str[2*n];
    printf("Enter the string: ");
    scanf(" %[^\n]s", str);

    char vowels[5] = "aeiou";

    int count_vowels = 0, count_space = 0, count_consonants = 0;

    // for (int i = 0; i < len; i++)
    // {
    //     if (str[i] == 32)
    //     {
    //         count_space++ ;
    //     }
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (vowels[j] == str[i])
    //         {
    //             count_vowels++ ;
    //         }
    //     }
    // }

    // count_consonants = len - count_vowels - count_space;

    strAnalysis(str, vowels, n, &count_vowels, &count_consonants, &count_space);

    printf("Vowels = %d\nConsonants = %d\nWhite Spaces = %d", count_vowels, count_consonants, count_space);
}