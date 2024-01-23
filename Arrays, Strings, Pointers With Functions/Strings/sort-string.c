// WAP to sort a string

#include<stdio.h>

void sortString(char *str, int len, int c)
{
    if (c == 1)
    {

        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (*(str + j) > *(str + i))
                {
                    int temp = *(str + i);
                    *(str + i) = *(str + j);
                    *(str + j) = temp;
                }
            }
        }
        
    }

    if (c == 2)
    {

        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (*(str + j) < *(str + i))
                {
                    int temp = *(str + i);
                    *(str + i) = *(str + j);
                    *(str + j) = temp;
                }
            }
        }
    }
}

void main()
{
    int n;
    printf("Enter the length of the string: ");
    scanf("%d", &n);

    char str[2*n];
    printf("Enter the string: ");
    scanf(" %[^\n]s", str);

    int sortChoice;
    printf("Enter the sort choice, \nenter 1 to sort in ascending order\nenter 2 to sort in descending order: ");
    scanf("%d", &sortChoice);

    sortString(str, n, sortChoice);
    printf("%s", str);

}