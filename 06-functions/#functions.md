functions are blocks of code that are combined in such a way that they can be executed any number of time without re-writing the whole code, any-where across the program.

* Types Of Functions -->
01. Built-in Functions ~ 
** are the functions which comes pre-defined in C language. 
** Built-in functions are stored in their respective libraries. 
** For example -- printf() and scanf() functions are stored in the **_Standard I/O Header File_**

02. User-defined Functions ~
** These are created by the user or the programmer itself for simplifying his code, to increase the readability and reusability of the code.

* Declaring user-defined Functions ~

Syntax - 
    <data-type-of-function> <function-identifier>(<arguments, if any, along with their data-type>);

    The above is the syntax to declare a function. But in the above one, the function's definition is missing.

Syntax -
    <data-type-of-function> <function-identifier>(<arguments, if any, along with their data-type>)
    {
        // body
        // return <value>; (if needed!)
    }

* There are 4 types of user-defined functions :
01. function with arugment and with return value.
02. function with argument and without return value.
03. function without argument and with return value.
04. function without argument and without return value.