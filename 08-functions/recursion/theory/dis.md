## Disadvantages Of Using Recursion

1. **Stack Overflow:**
One of the most common issues with recursion is the potential for a stack overflow, especially in languages like C where the stack size is limited. Excessive recursive calls can lead to a stack overflow, causing the program to crash.

2. **Memory Overhead:**
   - Each recursive call adds a new entry to the call stack, consuming additional memory. 
   - For deep recursion or problems with large input sizes, this can lead to increased memory usage, hampering the performance of both the program and the machine running the code.

3. **Performance Overhead:**
   - Recursive function calls can introduce performance overhead due to the additional function call and stack management. 
   - In many cases, iterative solutions may be more efficient.

4. **Difficulty in Debugging:**
Debugging recursive functions can be challenging. Tracing the flow of execution and understanding the state of the program at each recursive call can be more complex compared to iterative solutions.

5. **Function Call Overhead:**
Function calls, including recursive calls, come with a certain amount of overhead. For very small and frequently called functions, this overhead might be more significant than the benefit of using recursion.

6. **Limited Tail Call Optimization:**
C compilers may not always perform tail call optimization, a technique that allows the compiler to optimize away the current stack frame when the recursive call is the last operation in a function. Some languages and compilers support this optimization, but its support in C is limited.

7. **Readability for Some Developers:**
   - While recursion can make certain problems more readable, it may be less intuitive for some developers, especially those who are not familiar with recursive thinking. 
   - Iterative solutions might be more straightforward in such cases.

8. **Risk of Infinite Recursion & Undesired Outputs:**
   - If not implemented correctly, recursive functions may run indefinitely, leading to an infinite loop. 
   - Also in correct implementation can mess with the outputs and it is really hard, especially in the case of recursion, to find where the problem is. And thus, a huge amount of time, sometimes, is wasted in finding that issue.

9. **Limited Use for Certain Problems:**
   - Not all problems are well-suited for recursive solutions. 
   - Some problems are solved best with iterative approach, and attempting to force recursion can lead to unnecessary complexity.

10. **Difficulty in Analysis Of Complexities:**
Analyzing the time and space complexity of recursive algorithms can be more complex compared to iterative algorithms.