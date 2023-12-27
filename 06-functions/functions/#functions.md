                                        Introduction To Functions 

### Q. What are functions in C ?
* Functions are defined as the blocks of code that are combined in such a way that they can be executed any number of time without re-writing the whole code, any-where across the program.

* The different parts of a function includes -->
    01. **_Function decaration_** --> 
    A function declaration establishes the name, return type, and attributes of a function that is defined elsewhere in the program. 
    **Note** - A function declaration must precede the call to the function, that is why the header files containing the declarations for the run-time functions (example - printf() and scanf()) are included in your code before a call to a run-time function (#include <stdio.h> line in your code) is made inside the main().

    02. **_Function Statements_** -->
    Functions must have a definition and should have a declaration, although a definition can serve as a declaration if the declaration appears before the function is called. If the declaration has information about the types and number of parameters and no function body, then the function declaration is a prototype.

; and together they are known as function definition.


#### Q. What is a function Call ?
* A function call is a method of calling a function outside that function anywhere in the program code. 
* The function through which the call to another function is made is called as the **_Calling Function_**, while, the function which is being called by the calling function is called as the **_Called Function_**.

* A function call passes the execution control from the calling function to the called function.

* The Execution of a **_return_** statement in the called function returns the control from the called function to the calling function, and possibly also a value to the calling function (, if apllicable).



* Types Of Functions -->
    01. **_Built-in Functions_** ~ 
        * These are the functions which comes pre-defined in C language.   
        * Built-in functions are stored in their respective libraries. 
        * For example -- 
            printf() and scanf() functions are stored in the **_Standard I/O Header File_**.
            sqrt() and pow() functions are stored in the **_Math Library_**.

    02. **_User-defined Functions_** ~
        * These are created by the user or the programmer itself for simplifying his code, to increase the readability and reusability of the code.

#### Declaring user-defined Functions ~

~ Syntax to declare a **_Prototype Function_** -->

    <data-type-of-function> <function-identifier>(<arguments, if any, along with their data-type>);

~ Syntax to declare a function with proper declaration and definition -

    <data-type-of-function> <function-identifier>(<arguments, if any, along with their data-type>)
    {
        // body
        // return <value>; (if needed!)
    }


#### Types Of user-defined functions ~
There can be 4 types of user-defined functions :

01. function with arugment and with return value.
02. function with argument and without return value.
03. function without argument and with return value.
04. function without argument and without return value.

#### Arguemnts & Parameters Inside The Function Parenthesis

* **_Arguments_** are the values that are passed in the function call.
* **_Parameters_** are the values that are defined in the function's declaration. 

Basicaly, Parameters tell the function what kind of values to receive and, Arguments are the values that are passed by the user or the programmer and tell the function (in which they are passed) to placehold them in their respective variables or placeholders.

* For example -  
```c
// A function to add two numbers

int add(int num1, int num2){
    return (num1 + num2);
}
// Main function
void main(){
    add(5, 6);
}
// Output 
>>> 11
```
In the code snippet above, (int num1, int num2), which are passed in the function declaration are the *Parameters* for add() function. And the values (5, 6), which are passed in the function's calling are the *Arguments* for the add() function.

#### Scope Of Variables
* The variables declared inside the function and the variables declared outside the function, both have different scopes.

* Variables declared outside the function or in the main() function have **_Global Scope_**, which means that they can be accessed anywhere in the program, and if any operation is carried out on them, then it will update the value of that variable (if it got run successfully).

* Variables declared inside a function have **_local scope_**, which means that they can only be accessed within their function block and updation doesn't affect the variables with global scope.

* Concept of Scope of Variables is not limited to just function blocks. It is applicable to all the compound statements.

* For instance, if a variable is created inside a loop body, then it will be created freshly every single time the loop runs.
```c
for (int i = 1; i <= 5; i++)
{
    int sum = 0;
    sum++ ;
}

printf("%d", sum);
// Output
>>> Error
```

<<<<<<< HEAD
In this code piece, the sum variable has local scope and is created freshly every-single time the loop comes to an iteration. And calling or using it outside of its scope will return an error.
=======
In this code piece, the sum variable has local scope and is created freshly every-single time the loop comes to an iteration. And calling or using it outside of its scope will return an error.
>>>>>>> eaa32b27904f4fa746a8601c77bd6509819b508b
