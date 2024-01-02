## Characteristics Of Recursion In C

1. **Base Case:**
   - A recursive function must have a base case or termination condition that indicates that this is the end of recursion. 
   - Without a base case, the function would keep calling itself, indefinitely, leading to infinite recursion.

2. **Divide-and-Conquer Strategy:**
   - Recursive solutions often follow a divide-and-conquer strategy, which involves breaking down of the main problem into smaller, more manageable sub-problems. 
   - Each recursive call addresses a subset of the original problem.

3. **Self-Call:**
   - A recursive function calls itself either directly or indirectly. 
   - Typically, the function invokes itself with a modified set of parameters to solve a smaller instance of the main problem.

4. **Local Variables:**
Recursive calls have their own set of local variables, which are distinct from the local variables of other instances of the function. This allows each recursive call to maintain its own state.

5. **Chain of Recursive Calls:**
Recursive calls create a chain of function calls on the call stack. Each function call is pushed onto the stack, and the stack is popped as the base cases are reached.

6. **Initialization of Parameters:**
Parameters passed to the recursive function should be initialized with appropriate values during each recursive call. These values may change with each call to address different parts of the problem.

7. **Return Value:**
   - Recursive functions often return a value, which may be used to contribute to the final result or computation. 
   - The return value of the base case is a very crucial part for aggregating the results in the recursive chain.

8. **Performance Considerations:**
   - Recursive solutions can have performance overhead due to the additional function calls and stack management. In some cases, iterative solutions may be more efficient.

9. **Problem Decomposition:**
    - Recursive solutions involve breaking down a complex problem into simpler subproblems. The decomposition should lead to solving the original problem by combining solutions to the subproblems.

10. **Simplicity and Elegance:**
    - Recursive solutions can be more elegant and expressive for problems that naturally lend themselves to recursion. 
    - They often mirror the structure of the problem, making the code more intuitive.