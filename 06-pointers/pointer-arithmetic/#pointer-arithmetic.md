* *__Pointer Arithmetics__* refers to the valid arithmetic operations that can be carried out on a pointer.

* These operations include ~
01. Incrementing a Pointer
02. Decrementing a Pointer
03. Addition of an integer to a pointer
04. Subtraction of an integer to a pointer
05. Subtracting two pointers of the same type
06. Comparison of pointers of the same type.
07. Assignment of pointers of the same type.

### 01. Incrementing A Pointer / 03. Addition of an Integer to a Pointer

```c
// WAP to traverse through an array one by one element and also print the memory address of that element, all using pointers only. 

#include<stdio.h>
void main(){

    // An array storing the marks of a student
    int marks[] = {5, 8, 6, -8, 4};

    // A pointer having the address of the first element of the array <marks>
    int *mp;
    mp = marks;

    // A loop to iterate through the array.
    for (int i = 0; i < (sizeof(marks)/4); i++)
    {
        // To print the memory address using the pointer
        printf("it memory address: %p\n", mp);

        // To print the value stored in the array <marks> at the following memory address stored in the pointer.
        printf("array value using pointer: %d\n", *mp);

        // Since values in an array are stored in continuou memory locations, incrementing the memory address by 1 can give us the memory address of the next element of the array.
        mp++;
        // or
        // mp = mp + 1;
    }
}
```

### 02. Decrementing A Pointer / 04. Subtraction of an Integer from a pointer

```c
// WAP to traverse through an array one by one element and also print the memory address of that element, all using pointers only. 

#include<stdio.h>
void main(){

    // An array storing the marks of a student
    int marks[] = {5, 8, 6, -8, 4};
    
    // A pointer having the address of the last element of the array <marks>
    int *mp;
    mp = &marks[sizeof(marks)/4-1];

    // A loop to iterate through the array.
    for (int i = (sizeof(marks)/4 - 1); i >= 0 ; i--)
    {
        // To print the memory address using the pointer
        printf("array value using pointer: %d\n", *mp);
        
        // To print the value stored in the array <marks> at the following memory address stored in the pointer.
        printf("it memory address: %p\n", mp);

        // Since values in an array are stored in continuou memory locations, deccrementing the memory address by 1 can give us the memory address of the next element of the array.
        mp--;   
        // or
        // mp = mp - 1;
    }
}
```

### 05. Subtracting Two Pointers of the same type.

```c
// WAP to subtract two number using there pointers

#include<stdio.h>
void main()
{
    int a = 12, *x;
    x = &a;
    int b = 6.8, *y;
    y = &b;
    int c = a - b;

    printf("Normally!!\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c = a - b: %d\n", c);

    int sub = *x - *y;
    printf("Using Pointers!!\n");
    printf("a: %d\n", *x);
    printf("b: %d\n", *y);
    printf("c = a - b: %d\n", sub);
}
```

### 06. Comparison of pointers of the same type / 07. Assignment of pointers of the same type.

Example 1 -->
```c
// WAP to arrange or sort the elements of an array in ascending order. 

#include<stdio.h>
void main()
{
    int marks[] = {5, 8, 6, -8, 4};
    int *mp;
    mp = marks;

    for (int i = 0; i < sizeof(marks)/4 ; i++)
    {
        for (int j = 0; j < (sizeof(marks)/4 - 1); j++)
        {
            if (*(mp+j) > *(mp+j+1))
            {
                int temp;
                temp = *(mp+j);
                *(mp+j) = *(mp+j+1);
                *(mp+j+1) = temp;
            }
        }
    }
    for (int i = 0; i < (sizeof(marks)/4); i++)
    {
        printf("array value using pointer: %d\n", marks[i]);
    }   
}
```

Example 2 -->
```c
// WAP to arrange or sort the elements of an array in descending order. 

#include<stdio.h>
void main()
{
    int marks[] = {5, 8, 6, -8, 4};
    int *mp;
    mp = marks;

    for (int i = 0; i < sizeof(marks)/4 ; i++)
    {
        for (int j = 0; j < (sizeof(marks)/4 - 1); j++)
        {
            if (*(mp+j) < *(mp+j+1))
            {
                int temp;
                temp = *(mp+j);
                *(mp+j) = *(mp+j+1);
                *(mp+j+1) = temp;
            }
        }
    }
    for (int i = 0; i < (sizeof(marks)/4); i++)
    {
        printf("array value using pointer: %d\n", marks[i]);
    }   
}
```