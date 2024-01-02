1. **Modularity:**
   - Functions help in dividing a large program into smaller, manageable modules.
   - Each function performs a specific task, making the code more organized and easier to understand.

2. **Reusability Of Code:**
   - Once a function is defined, it can be called as many times the requirement is from different parts of the program.
   - This promotes code reusability, as you can use the same function in various places without rewriting the code.

3. **Encapsulation:**
   - Functions encapsulate a set of operations or tasks within a single unit.
   - The internal details of a function are hidden from the rest of the program, providing a level of abstraction.

4. **Return Value:**
   - Functions can return a value to the calling code using the `return` keyword or statement.
   - The return type is declared in the function signature, indicating the type of value the function will return (or `void` if no value is returned).

5. **Parameters:**
   - Functions can accept parameters (input values) that are used within the function.
   - Parameters are declared in the function's parameter list inside the parenthesis and act as placeholders for the actual values passed during the function call.
   - Functions in C can accept a wide variety of parameters, such as, numbers, arrays, strings, pointers etc.....

6. **Function Prototype:**
   - A function prototype declares the function's name, return type, and parameter types (if any). It serves as a declaration before the actual function definition.
   - Prototypes are placed at the beginning of the program or in header files.

7. **Function Definition:**
   - The function definition contains the actual code that gets executed when the function is called.
   - It includes the function header (return type, name, and parameters) and the function body (the block of code enclosed in curly braces).

8. **Local Variables:**
   - Variables declared inside a function are called local variables.
   - Local variables are only accessible within the function where they are declared, providing a level of data encapsulation.

9. **Global vs. Local Scope:**
   - Functions can access both global variables (declared outside any function) and local variables (declared inside the function).
   - However, global variables are visible to all functions, while local variables are limited to the function's scope.

10. **Recursion:**
    - Recursion is a process when a function calls itself. And the function which implements this functionality is known as Recursive Function.
    - C functions can be recursive, meaning a function can call itself either directly or indirectly.
    - Recursion is a powerful technique but should be used with caution to avoid infinite loops.