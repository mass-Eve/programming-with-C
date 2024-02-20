# Dynamic Memory Allocation In C

- It is a method of allocating memory during runtime.
- It provides good memory management.

## Memory Allocation In C
- *The memory assigned to a program in a typical architecture can be broken down into four segments.*
- They are :
    01. ***Code :*** Also known as *Text Segment*. Here all of our code is saved.
    02. ***Static/Global Variables :*** 
        - It is divided into two segments.
            01. *Data Segment :* It is meant to store the initialised data. Meaning - when we create a global variable and initialise it with some value, for example - `int i = 10;` , it will be stored in this segment of the memory.
            02. *BSS Segment :* It is meant to store the un-initialised data. Meaning - when we create a global variable and don't initialise it with any value, for example, like this - `int i;` , it will be stored in this segment of the memory. Because it is not initialised with any value, it is just declared.
    03. ***Stack :*** Stack grows as the length of the program grows.
    04. ***Heap :*** Heap is the memory which is used for *Dynamic Memory Allocation.*

    (***Note - 03 and 04 discussed in detail***)

### Memory Layout
Lets suppose we have a program like this ~
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
