# Characteristics Of Arrays

1. **Fixed Size:** Arrays in C have a fixed size, meaning you need to specify the number of elements the array can hold when declaring it. Once the size is set, it cannot be changed during runtime.

    ```c
    int numbers[5]; // Array of integers with a size of 5
    ```

2. **Zero-based Indexing:** Array elements are accessed using indices, and in C, the indices start from 0. The first element is accessed with index 0, the second with index 1, and so on.

    ```c
    int numbers[3] = {10, 20, 30};
    int firstElement = numbers[0]; // Accessing the first element (10)
    ```

3. **Contiguous Memory Allocation:** Array elements are stored in contiguous memory locations. This means that the elements of an array are stored one after the other in memory. This is particularly very useful when we are implementing pointers together with arrays, as pointers can be incremented by 1 to obtain the memory address of the next element of the array.

4. **Homogeneous Data Type:** All elements in an array must be of the same data type. For example, an array of integers can only store integers, and an array of characters can only store characters. 

    ```c
    // Array of floating-point numbers
    float prices[4] = {2.5, 1.8, 3.2, 4.0}; 
    ```

5. **Initialization:** Arrays can be initialized at the time of declaration. You can provide initial values for the elements within curly braces `{}`.

    ```c
    // Initializing an array at the time of declaration
    int values[3] = {5, 10, 15}; 
    ```

6. **No Bounds Checking:** 
* C does not perform bounds checking on array indices. It's the programmer's responsibility to ensure that the index used to access an array element is within the bounds of the array to avoid undefined behavior.
* What would happen, if the user provided an out of the bound value (or index value)?
    If a user provides an out-of-bounds index when accessing an array in C, it can lead to undefined behavior. Undefined behavior means that the program's behavior is not defined by the C standard, and the result can be unpredictable. Common consequences of out-of-bounds array access include crashes, data corruption, or unexpected behavior.

    ```c
    int numbers[3] = {10, 20, 30};
    // Accessing an element outside the bounds of the array
        // ( leads to undefined behavior )
    int value = numbers[4]; 
    ```

7. **Sizeof Operator:** You can use the `sizeof` operator to determine the size (in bytes) of an array.

    ```c
    int numbers[5];
    int size = sizeof(numbers); // Size of the array in bytes
    ```

8. **Length Of Array:** We can find th length of an array by using the `sizeof()` function.

    ```c
    int numbers[5];
    int size = sizeof(numbers); // Size of the array in bytes
    >>> 25

    size = size/4    // size in terms of actual elements
    >>> 5
    ```

9. **Multidimensional Arrays:** C supports multidimensional arrays, allowing you to create arrays with more than one dimension. For example, a two-dimensional array can be thought of as a matrix, where the first indice means *the row* and the second indice means *the column*

    ```c
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    ```

10. **Array Decay:** When passing an array to a function, it "decays" into a pointer to its first element. This means that the function receives a pointer to the array's first element rather than a copy of the entire array. It could be any function, `printf()`, `scanf()` or even a `user-defined` one.

    ```c
    void printArray(int arr[], int size) {
        // Function receives a pointer to the first element
    }
    ```

11. **String Handling:** Strings in C are essentially arrays of characters. However, C provides a convenient way to work with strings using null-terminated character arrays. Standard library functions like `strlen`, `strcpy`, and `strcat` operate on these arrays.

    ```c
    char greeting[] = "Hello, world!";
    ```

12. **Dynamic Memory Allocation:** While the size of static arrays is fixed at compile time, C also allows dynamic memory allocation using functions like `malloc` and `free`. This allows you to create arrays whose size is determined at runtime.

    ```c
    int *dynamicArray = malloc(5 * sizeof(int));
    
    free(dynamicArray); // Don't forget to free the allocated memory
    ```
