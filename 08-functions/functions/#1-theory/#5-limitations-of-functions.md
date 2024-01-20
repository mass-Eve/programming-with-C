## Limitations Of Functions In C

1. **No Nested Functions:**
C does not support the definition of functions inside other functions. Each function must be defined at the global or file scope.

2. **No Function Overloading:**
   - Unlike some other programming languages, C does not support function overloading, which allows multiple functions with the same name but different parameter lists. 
   - In C, each function must have a unique name.

3. **Limited Support for Default Arguments:**
C does not have built-in support for default function arguments. All function parameters must be explicitly provided during the function call.

4. **Limited Return Type Checking:**
   - C allows a function to return any type, including complex data structures, but it relies on the programmer's discipline to handle the returned values correctly. There is no built-in mechanism to enforce strict return type checking.
   - Also, `return` statement can return only one value at a time. Though this is not a big issue as it can be cured by using call by reference method of calling a function. But the major issue with it is that, Call bye Referencing can create some real issues if not handled properly.

5. **No Named Parameters:**
   - C does not support named parameters, which means that the order of arguments during a function call must match the order of parameters in the function declaration.
   - Otherwise, an `ERROR` is waiting for you in the console window.

6. **Limited Error Handling:**
C functions typically use return values or global variables for error handling. There is no built-in exception mechanism, making error handling less structured compared to languages with exception handling features.

7. **No Function Metadata:**
   - C does not provide a standardized way to obtain metadata about functions, such as the number and types of parameters or the return type. 
   - This information is often managed through documentation or external tools by the programmer.

8. **Limited Support for Function Pointers:**
While C supports function pointers, the syntax can be complex, and there is no type safety when using function pointers. It's the programmer's responsibility to ensure that function pointers match the expected signature.

9. **No Information Hiding:**
C functions do not provide inherent support for information hiding or private members. All function declarations and definitions are visible in the header files, and it relies on the programmer's discipline to avoid unintended use.

10. **Limited Parameter Checking:**
C does not enforce strict checking of the number of arguments passed to a function. The responsibility for ensuring correct argument counts lies with the programmer.