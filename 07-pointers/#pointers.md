                    Introduction To Pointers

### Introduction
* A pointer is a variable that stores the memory address of another variable, functions, or even another pointer as well.

* A pointer is defined as a derived data type that can store the address of other C variables or a memory location. We can access and manipulate the data stored in that memory location using pointers.

* As the pointers in C store the memory addresses of the variables, their own variable size is independent of the type of data they are pointing to. This size of pointers in C only depends on the system architecture.

* The value stored in a pointer is always an integral number: a location within the computer’s memory space.

### Address Of Operator ( & )
* The address-of operator in C is represented by the ampersand symbol (*__&__*). 
* It is used to obtain the memory address of a variable. 

### Indirection Operator In C ( * )
The indirection operator in C is represented by the asterisk ' __*__ ' symbol. It is also commonly known as the dereference operator. The indirection operator is used to access the value stored at the address held by a pointer. In other words, it allows you to retrieve the data located in the memory location pointed to by a pointer.

### Syntax Of Declaring Pointers

    <data-type-of-pointer> * <identifier-name> ;

    // white space doesn't really matters
    <data-type-of-pointer> *<identifier-name> ;
    <data-type-of-pointer>* <identifier-name> ;

    All of them will work exactly the same.

```c
// A variable marks, storing the marks of a student.
int marks;
// A marks pointer
int *marks_pointer;
```

### Assigning Values to a Pointer
* Pointer initialization is the process where we assign some initial value to the pointer variable. We generally use the ( & ) addressof operator to get the memory address of a variable and then store it in the pointer variable.

    <data-type-of-pointer> * <identifier-name> = &<variable-identifier> ;

* Example ~

```c
// A variable rollno, storing the rollno of a student.
int roll;
// A rollno_pointer, which wil point at the memory address where the rollno. is stored in the memory.
    // Method 1
int *roll_pointer = &roll ;         // Also known as Pointer Definition or Pointer in One Line
    // Method 2
int *roll_pointer;
roll_pointer = &roll ;
```

### Accessing The Values Inside A Pointer -->
*__%p__* format specifier is used to access the value inside a pointer, which is basically the address of the variable.

### Pointer De-refrencing -->
Pointer dereferencing is the process of accessing the value stored in the memory location pointed to by a pointer. In C, the dereference operator * is used for this purpose.

* Example -

```c
#include<stdio.h>

void main()
{
    // variable to store roll no.
    int roll = 6;
    // variable to store the memory location where the roll no. is stored.
    int *roll_pointer = &roll;

    // Accesing the value inside the rollno. variable.
    printf("value of rollno: %d\n", roll);

    // Accessing the value inside the rolno's pointer, i.e the memory address of rollno variable. 
    printf("value of rollno's address: %p\n", roll_pointer);

    // Derefrencing the pointer, basically retreiving the values stored in the memory address value that the pointer is storing.
    printf("value of rollno using pointer: %d\n", *roll_pointer);
}

>>>
value of rollno: 6
value of rollno's address: 0061FF18
value of rollno using pointer: 6
```