## Characteristics Of Strings In C

1. **Array of Characters:** 
    * In C, strings are represented as arrays of characters, terminated by a null character. 
    * Each character in the string is stored in a continuous memory location.

2. **Null-terminated:** C strings are null-terminated, which means they are followed by a null character (`'\0'`) to indicate the end of the string. This character is automatically added when a string literal is used, and it is essential for various string manipulation functions to determine the end of the string.

3. **String Literals:** String literals are enclosed in double quotes and automatically create null-terminated character arrays.


4. **Length of a String:** The length of a string is the number of characters before the null-terminator. You can use the `strlen` function from the `<string.h>` library to find the length of a string.

    ```c
    #include <string.h>
    size_t length = strlen(myString);
    ```

It's important to note that C does not have a built-in string data type like some other programming languages. Instead, strings are typically represented as arrays of characters, and string manipulation is done using standard library functions.