#include<stdio.h>
void main()
{
    int a;
    a = 5;

    int *a_ptr, **ptr_a_ptr;

    a_ptr = &a;
    ptr_a_ptr = &a_ptr;

    printf("value of a, normally: %d\n", a);
    printf("value of a, using its pointer, a_ptr: %d\n", *a_ptr);
    printf("value of a, using its pointer's pointer, i.e ptr_a_ptr: %d\n", **ptr_a_ptr);

    printf("\n");

    printf("value of <a>'s memory address, using &a: %d\n", &a);
    printf("value of <a>'s memory address, using its pointer: %d\nd", a_ptr);
    printf("value of <a>'s memory address, using its pointer's pointer: %d\n", *ptr_a_ptr);

    printf("\n");

    printf("value of a_ptr, normally: %d\n", a_ptr);
    printf("value of a_ptr, using its own pointer: %d\n", *ptr_a_ptr);
    printf("\t This is exactly memory address of <a>");

    printf("value of memory address of a_ptr, normally: %d\n", &a_ptr);
    printf("value of memory address of a_ptr, using it's pointer: %d\n", *ptr_a_ptr);

    printf("\n");

    printf("value of ptr_a_ptr, which is the address of a_ptr: %d\n", ptr_a_ptr);

}