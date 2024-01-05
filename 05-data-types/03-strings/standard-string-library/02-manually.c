#include<stdio.h>
#include<string.h>

int stringcopy(const char *main_string, char *string_in_which_we_have_to_copy)
{
    char *s1 = main_string, *s2 = string_in_which_we_have_to_copy;
    s2 = s1;

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);

    return 0;
}

void main()
{
    char str1[100] = "John Mccully";
    char str2[100];

    stringcopy(str1, str2);
}