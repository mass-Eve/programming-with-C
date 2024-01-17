## Quesn. *Why should I avoid using Arrays? What are the Disadvantages of using Arrays?*

1. **Fixed Size:** 
    * The size of an array is fixed at the time of declaration, and it cannot be changed during runtime. 
    * This limitation makes arrays less flexible for applications where the size of the data structure needs to be dynamic.

2. **Memory Wastage:** 
    * If you declare an array with a large size but only end up using a small portion of it, you might waste memory. 
    * This is especially relevant, when the maximum size of the array is difficult to predict.

3. **No Automatic Bounds Checking:** 
    * C does not perform automatic bounds checking on array indices. 
    * If you're not careful while accessing the elements of an array and mistakelnly provided indices outside the bounds of an array, it can lead to undefined behavior, such as crashes or data corruption.  
    * Therefore, check the bounds on yourself, as C will neither warn you nor raise an exception regarding it.

    ```c
    int numbers[3] = {10, 20, 30};
    int value = numbers[4]; // Undefined behavior
    ```

4. **Inflexible Data Type:** 
    * All elements in an array must be of the same data type. 
    * Elements with Hetrogeneous data types are not allowed in arrays, in C. All the elements must be Homogeneous.
    * If you need to store elements of different types, you may need to resort to using structures or other data structures.

5. **Inefficient Insertions and Deletions:** 
    * Inserting or deleting elements in the middle of an array can be inefficient, as it may require shifting all subsequent elements. 
    * Other data structures, like linked lists, may be more suitable for dynamic insertions and deletions.

6. **Passing by Value:** 
    * When passing an array to a function, you're actually passing a copy of the array's address. If you modify the array within the function, the changes affect the original array. This creates a mess when you need to retain the original array.
    * However, you can't directly determine the size of the array within the function.  
    \  

    ```c
    void modifyArray(int arr[]) {
        // Changes to arr affect the original array
        // However, the size of arr is not directly known
    }
    ```

7. **No Built-in Range Checking:** While some modern languages provide range checking for arrays, C does not. It's the responsibility of the programmer to ensure that array indices are within bounds.

    ```c
    int numbers[3] = {10, 20, 30};
    int value = numbers[-1]; // No range checking (undefined behavior)
    ```
