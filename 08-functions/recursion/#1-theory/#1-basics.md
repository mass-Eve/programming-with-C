# Introduction To Recursion

* **_Recursive functions_** or **_Recursion_**, is a process when a function calls a copy of itself to work on a smaller problem.

* Any function which calls itself is called a recursive-function.

* A termination condition is imposed on such functions to stop them executing copies of themselves forever.

* Any problem that can be solved recursively, can also be solved iteratively (using loops).

* Sometimes, also called by *Circular Definition*.

### Q. How To Implement Recursion?
01. The case at which the function doesn't recur is called the **_base case_**.
02. The instances where the function keeps calling itself to perform a sub-task is called the **_recursive case_**. Basically, the case which is not the base case, is the recursive case.

*For example* ~ In the calculation of factorial of a number, the base case occurs at 0 and 1, as the factorial of both of them is 1 and no further calculation is required after reaching them.


### Implementation of Recursion In Calculating The Factorial Of A Number

    // Calculate the factorial of a number
    int fact(int num);

    // Calculate the factorial of 5
    *Step 1* 
            >>>   fact(5)
    *Step 2* 
            >>>   5 * fact(4)
    *Step 3* 
            >>>   5 * 4 * fact(3)
    *Step 4* 
            >>>   5 * 4 * 3 * fact(2)
    *Step 5* 
            >>>   5 * 4 * 3 * 2 * fact(1)

    >>> 5 x 4 x 3 x 2 x 1 = 120