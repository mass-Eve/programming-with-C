### Introduction

* Whenever we want to use a function, we have to call it. 
* Now there are two methods or ways of calling a function, and both of them have there importance in there respective implementations ~
01. Call by Value.
02. Call by Reference.

#### Call By Value Mechanism
* In `call by value` mechanism, the arguments are passed as it is into the function's definition. 
* What does it mean? When we pass arguments in the function call, there values are copied as it is in the parameters present in the function's declaration. And as a result, any updation taking place inside the function's body, will only update the values inside the parameters and will show no effect on the actual values that were being passed in the function calling (arguments)

* Lets implement it using a simple C program

```c
// WAP to swap to integer values.
#include<stdio.h>

int swap(int num1, int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void main()
{
    int a = 15; 
    int b = 30;

    printf("Before Updation\n");
    printf("a: %d\nb = %d\n", a, b);

    swap(a, b);

    printf("After Updation\n");
    printf("a: %d\nb = %d\n", a, b);
}

>>>
    Before Updation
    a: 15
    b = 30
    After Updation
    a: 15
    b = 30
```

##### Advantages Of using Call By Value Mechanism

1. **Simplicity:** `NO FANCY THINGS`
Call by Value is simpler to understand and implement. It involves straightforward copying of values, making the code more readable and less prone to errors. 

2. **Predictability:**
Since changes made to the parameters inside the function, it does not affect the actual parameters outside the function, it makes the behavior of the program more predictable and easier to reason about. Once can easily see and count the differences.

3. **Isolation of Variables:**
Variables inside the function are isolated from the outside world. This isolation can help prevent unintended side effects and makes it easier to reason about the flow of data within the program.

4. **Safety:**
* Call by Value is generally safer when dealing with sensitive data or critical operations. 
* It ensures that the function cannot inadvertently modify the values of variables outside its scope.

5. **No Pointer Overhead:**
* Call by Value does not involve the use of pointers, reducing the overhead associated with managing and dereferencing pointers. 
* This can be advantageous in terms of both execution speed and memory usage.

6. **Compatibility:**
Functions using Call by Value are often more compatible with other languages and systems because the interface is simpler. It's a common parameter passing mechanism across various programming languages.

7. **Parallel Execution:**
In parallel programming environments, Call by Value can be more suitable as it avoids issues related to shared mutable state. Each function operates on its own copy of the data, reducing the likelihood of race conditions.

8. **Immutable Semantics:**
Call by Value promotes a more functional programming style where variables are treated as immutable. This can make the code more modular and easier to reason about, especially in concurrent or multithreaded environments.

##### Disadvantages Of using Call By Value Mechanism

1. **Performance Overhead:**
Copying large data structures can incur a performance overhead, especially when dealing with complex objects. This overhead may affect the program's efficiency and speed, particularly in cases where frequent function calls occur with substantial data.

2. **Memory Usage:**
* More memory is consumed.
* And In cases where the data being passed is large, passing by value can result in increased memory usage. This is because a copy of the entire data structure is created, consuming additional memory.

3. **Inefficiency for Mutable Objects:**
If the data being passed is mutable (can be changed), and the function needs to modify the original data, using Call by Value might involve additional steps to return the modified data.

4. **Limitation in Return Values:**
Returning multiple values from a function can be less straightforward with Call by Value. This often requires using more complex data structures or resorting to global variables.

5. **Lack of Direct Modification:**
Since Call by Value involves working with copies of the original data, there is no direct way to modify the original data within the function. And if the requirement is to update the original values, this can lead to the need for using additional mechanisms, such as returning modified values.

6. **Not Suitable for Resource Management:**
* When dealing with resources like file handles, network connections, or dynamic memory allocation, Call by Value may not be suitable. 
* Closing a file or deallocating memory inside a function may not affect the original resource outside the function.

7. **Overhead for Basic Types:**
For simple and small data types (like integers or characters), the overhead of copying values may be negligible. In such cases, the advantages of Call by Value might not be as pronounced.


#### Call By Reference Mechanism
* In `call by reference` method of calling a function, we pass the memory address of that value, instead of the actual value.
* What does it mean? Basically what happens is, when we are passing the memory address of the variable, we are not passing a copy of the variable, instead, we are passing that variable itself. And because the variable is now accessed using its memory location, any updation that happens inside the function's body, will show its effects on the main value as well. As now eveything is happening on the main value, instead of a copied value.

* Lets implement it using a simple C program
```c
// WAP to swap to integer values.
#include<stdio.h>

int swap(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void main()
{
    int a = 15; 
    int b = 30;

    printf("Before Updation\n");
    printf("a: %d\nb = %d\n", a, b);

    swap(&a, &b);

    printf("After Updation\n");
    printf("a: %d\nb = %d\n", a, b);
}

>>>
    Before Updation
    a: 15
    b = 30
    After Updation
    a: 30
    b = 15
```


##### Advantages Of using Call By Reference Mechanism

1. **Modification of Actual Parameters:**
Call by Reference allows a function to modify the values of the actual parameters directly. Changes made to the formal parameters inside the function are reflected in the original variables outside the function.

2. **Efficient Memory Usage:**
Call by Reference is memory-efficient as it doesn't involve creating a copy of the entire data structure. Instead, it works with the address of the data, reducing the overhead associated with copying large objects.

3. **Avoidance of Duplicate Data:**
Since the function operates on the actual data rather than a copy, there is no need to duplicate large data structures. This can be particularly advantageous when dealing with resource-intensive or large-scale applications.

4. **Simplified Return of Multiple Values:**
Call by Reference simplifies the process of returning multiple values from a function. The function can modify the values of the referenced variables, and the changes are visible outside the function.

5. **Efficiency for Large Objects:**
* For large objects or structures, Call by Reference is more efficient than Call by Value. 
* Passing a reference to the data structure avoids the need to copy the entire object, leading to better performance.

6. **Direct Access to Original Data:**
* Call by Reference allows the function to directly access and modify the original data. This can be advantageous in scenarios where direct manipulation of the original data is necessary.

7. **Dynamic Memory Management:**
   * When dealing with dynamic memory allocation, Call by Reference allows a function to manipulate pointers and manage memory more effectively. 
   * For example, it can free memory or reallocate memory within the function, affecting the original memory outside the function.

8. **Improved Readability:**
Call by Reference can improve code readability by making it clear that the function has the potential to modify the actual parameters. This explicitness can make the code more self-explanatory.

9. **Conservation of Resources:**
In scenarios where resources like file handles or network connections need to be managed, Call by Reference enables a function to directly manipulate these resources, ensuring proper resource conservation.

10. **Avoidance of Global Variables:**
Call by Reference can help avoid the use of global variables for communication between functions. Instead, functions can communicate through the parameters passed by reference.


##### Disadvantages Of using Call By Reference Mechanism

1. **Complexity and Readability:**
Call by Reference can make code more complex and potentially harder to read, especially when it's not immediately clear whether a function modifies the values of its parameters. This can impact code maintainability.

2. **Potential for Unintended Side Effects:**
Because a function can modify the values of variables outside its scope, there is a potential for unintended side effects. This can make the program behavior less predictable, especially in large or complex codebases.

3. **Loss of Encapsulation:**
Call by Reference can break the principle of encapsulation, as functions may have direct access to and modify the internal state of objects. This can lead to a lack of control over the data.

4. **Security Concerns:**
In certain scenarios, allowing functions to directly modify data outside their scope might introduce security vulnerabilities, especially if the program is dealing with sensitive information.

5. **Initialization Issues:**
Functions that use Call by Reference assume that the referenced variables are initialized before the function call. If not properly initialized, it can lead to unpredictable behavior or runtime errors.

6. **Inefficiency for Small Data Types:**
For small and simple data types, the overhead of passing the reference (address) may be unnecessary. In such cases, Call by Value might be more efficient.

7. **Pointer Management:**
Call by Reference involves working with pointers, and improper management of pointers can lead to issues like null pointer dereferencing or memory leaks.

8. **Limited Portability:**
Code that heavily relies on Call by Reference may be less portable across different programming languages or environments that do not support similar reference mechanisms.

9. **Difficulty in Debugging:**
Debugging can be more challenging when functions modify variables outside their local scope. Identifying the source of unexpected changes in variables may require careful examination of the code.

10. **Global Impact:**
Call by Reference can have a global impact on the program, making it harder to reason about the flow of data. This can be problematic in terms of code maintenance and debugging.