#include<stdio.h>
void main()
{
    // char name[] = "john";

    // printf("name: %s\n", name);
    
    // printf("size: %d\n", sizeof(name));

    // for (int i = 0; i < sizeof(name) - 1; i++)
    // {
    //     printf("%c | ", name[i]);
    // }

    // printf("\n");

    // int j = 0;
    // while (j < sizeof(name)-1)
    // {
    //     printf("%c | ", name[j]);
    //     j++;
    // }
    
    // printf("\n");

    // int k = 0;

    // do {
    //     printf("%c | ", name[k]);
    //     k++;
    // } while (k < sizeof(name)-1);
    
    // printf("\n");


    char name2[] = "john";
    char *np = name2;
    for (int i = 0; i < sizeof(name2) - 1; i++)
    {
        printf("%c | ", *np);
        *np ++;
    }
}