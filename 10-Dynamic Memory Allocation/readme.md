# Memory Allocation In C 

*The memory assigned to a program in a typical architecture can be broken down into four segments.*
- They are :
    01. ***Code :*** Also known as *Text Segment*. Here all of our code is saved.
    02. ***Static/Global Variables :*** 
        - It is divided into two segments.
            01. *Data Segment :* It is meant to store the initialised data. Meaning - when we create a global variable and initialise it with some value, for example - `int i = 10;` , it will be stored in this segment of the memory.
            02. *BSS Segment :* It is meant to store the un-initialised data. Meaning - when we create a global variable and don't initialise it with any value, for example, like this - `int i;` , it will be stored in this segment of the memory. Because it is not initialised with any value, it is just declared.
    03. ***Stack :*** Stack grows as the length of the program grows.
    04. ***Heap :*** Heap is the memory which is used for *Dynamic Memory Allocation.*

    (***Note - 03 and 04 discussed in detail***)

## Static Memory Allocation In C (with Stack)

*Lets suppose we have a program like this ~*

```c
#include<stdio.h>

// a function to increment the value of a variable and return it
int incrementFunc(int num){
    num++ ;
    printf("Now the value of number is %d\n", num);
    return num;
}

// A global variable
int a = 5;

void main(){
    int x = incrementFunc(a);
    x = incrementFunc(a);
    x = incrementFunc(a);
    x = incrementFunc(a);
    x = incrementFunc(a);
    x = incrementFunc(a);
}
```

```cmd
Now the value of number is 6
Now the value of number is 6
Now the value of number is 6
Now the value of number is 6
Now the value of number is 6
Now the value of number is 6
```

- In the first step, whole code will be stored in the *`CODE` segment* of the memory.
- Next all the *global/static variables* will get stored in the *`global/static` segment* of the memory.
- Now when the compiler will encounter the *`main()`* function, 
    - it will create a *stack frame* for *`main()`* function. Inside that stack frame, all the variables and storage containers will be present.
    - Now when the compiler reads the 1st line of code, it will see a function named *`incrementFunc(int)`* , now the main() function will call this *`incrementFunc(int)`* function and when this function is called, a stack frame for this function will be created and all the variables or storage containers present inside this function will get stored in the frame. 
        - After this, this function will get executed.
        - Until this function is getting executed, *`main()`* will wait for it, until its execution is not completed and the value is not returned by the function.
        - Now we are also executing another function named *`printf()`* inside our function *`incrementFunc(int)`* , so the compiler will create another *stack-frame* for *`printf()`* function and will execute it.
        - When the execution of this function is completed, it will pop out the stack-frame created for it. And will return the control to *`incrementFunc(int)`* function.
        - And when this *`incrementFunc(int)`* function is completed with its execution and has returned the value *successfully*, the compiler will pop out the stack-frame created for this function *`incrementFunc(int)`* also, and will return the control to *`main()`* function.
    - Now this cycle is repeated until all the statements are executed.

### Stack Overflow :
- C compiler allocates some space for the stack part of the memory.
- When this alloted space or memory is exhausted (or all used up) due to some reason, the situation is known as *stack overflow*.
- *For example* - A recursive function with no base condition will run infinitely and will cause stack overflow as everytime something is getting pushed inside the stack space but nothing is getting removed (or popped).

-----

## Dyanmic Memory Allocation (with Heap)
- There are many limitations of using Stack (or static memory allocation). We can resolve them by utilising the concept of Dynamic Memory Allocation.
- Dynamic Memory Allocation is a concept using which we can change or manipulate the size taken by a data structure during the runtime of the program, unlike the compile time methodology where the size of a data structure is fixed.
- In dynamic memory allocation, the memory is allocated in the heap segment of the memory.
- We can create a pointer in our *`main()`* function which will point to a memory block in *heap*.
- We have 4 functions in total which helps in allocating memory dynamically. They are - 
```c
malloc()
calloc()
realloc()
free()
```

- And to use these functions, we have to import the standard library in our program
```c
#include<stdlib.h>
```

### *malloc() or Memory Allocation Function*
- It reserves a block of memory with the given amount of bytes
- It returns a *`VOID POINTER`* to the allocated space. Therefore, the *`VOID POINTER`* needs to be casted to the appropriate type as per the requirements.
- However, if the space is insufficient, allocation of memory fails and it return a *`NULL POINTER`* .
- All the values at allocated memory are initialised to garbage values.

- The syntax of using `malloc()` is ~
```c
<data-type> *<ptr-name>;
<ptr-name> = (<ptr-type*>) malloc(<size-in-bytes>);
```

- ***For example :***
```c
#include<stdio.h>

// To access function that will help us in allocating the memory dynamically
#include<stdlib.h>

void main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    // Declaring a dynamic array using malloc()
    int *dynamic_array;
    dynamic_array = (int *) malloc(n*sizeof(int));

    // taking elements from the user
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at pos %d: ", i);
        scanf("%d", &dynamic_array[i]);
        printf("\n");
    }

    // printing the elements
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("The element at pos %d is: %d", i, dynamic_array[i]);
        printf("\n");
    }
}
```

----


### *calloc() or Contiguous Allocation Function*
- It reserves ***n*** blocks of memory with the given amount of bytes
- It returns a *`VOID POINTER`* to the allocated space. Therefore, the *`VOID POINTER`* needs to be casted to the appropriate type as per the requirements.
- However, if the space is insufficient, allocation of memory fails and it return a *`NULL POINTER`* .
- All the values at allocated memory are initialised to 0.

- The syntax of using `malloc()` is ~
```c
<data-type> *<ptr-name>;
<ptr-name> = (<ptr-type*>) calloc(n, <size-in-bytes>);
```

- ***For example :***
```c
#include<stdio.h>

// To access function that will help us in allocating the memory dynamically
#include<stdlib.h>

void main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    // Declaring a dynamic array using calloc()
    int *dynamic_array;
    dynamic_array = (int *) calloc(n, sizeof(int));

    // taking elements from the user
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at pos %d: ", i);
        scanf("%d", &dynamic_array[i]);
        printf("\n");
    }

    // printing the elements
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("The element at pos %d is: %d", i, dynamic_array[i]);
        printf("\n");
    }
}
```

***Note*** - *use calloc() to declare a dynamic array only when you want to initialise all the elements with 0, otherwise it is a overhead for the compiler to declare a array and initialise all of its elements as 0.*

-----

### *realloc() or Reallocation Function*
- If at any point, the size of the previously allocated memory becomes insuffiecient and you want to reallocate memory with more size, we make use of `realloc()` function.

- Syntax Of Usage ~
```c
<data-type> *<ptr-name>;
<ptr-name> = (<ptr-type*>) realloc(<ptr-name>, <new-size-in-bytes>);
```

- ***For example :***
```c
#include<stdio.h>

// To access function that will help us in allocating the memory dynamically
#include<stdlib.h>

void main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    // Declaring a dynamic array using calloc()
    int *dynamic_array;
    dynamic_array = (int *) calloc(n, sizeof(int));

    // taking elements from the user
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at pos %d: ", i);
        scanf("%d", &dynamic_array[i]);
        printf("\n");
    }

    // printing the elements
    printf("The size of this dynamically allocated array is: %d", n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("The element at pos %d is: %d", i, dynamic_array[i]);
        printf("\n");
    }

    // Taking the new size from the user
    printf("Enter the new size to allocate the array with: ");
    scanf("%d", &n);

    // realocating the array using realloc() function
    dynamic_array = (int *) realloc(dynamic_array, n*sizeof(int));

    // Again taking elements from the user
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at pos %d: ", i);
        scanf("%d", &dynamic_array[i]);
        printf("\n");
    }

    // printing the new elements
    printf("The size of this dynamically allocated array is: %d", n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("The element at pos %d is: %d", i, dynamic_array[i]);
        printf("\n");
    }
}
```