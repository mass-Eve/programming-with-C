## Recieving Single Words Only ~

```c
#include<stdio.h>
void main()
{
    char name3[] = {};
    printf("Enter your name: ");
    scanf("%s", name3);

    printf("name: %s", name3);
}
>>> Enter your name: John           
    name: John                          

>>> Enter your name: John Kris
    name: John

```
* Note - The limitation of using `scanf()` function to input a multi-word string is that it can not actually accept a multi-word string. Only the first word of the string will be accepted and the rest will be discarded.

* Although we can solve this problem of `scanf()` function, but it is not advised to use this functionality.

## Recieving Multiple Words  ~

```c
#include<stdio.h>
void main()
{
    char name3[] = {};
    printf("Enter your name: ");

    scanf("%[^\n]s", name3);
    printf("name: %s", name3);
}
>>> Enter your name: John           
    name: John                          

>>> Enter your name: John Kris
    name: John                          
    name: John Kris
```

### No '&' in scanf(), why?
* As we all know that `scanf()` requires the address of the variable where the value has to be stored. and to do the same, we use '&'. But why no `ampersand` is used while accepting a string from the user using `scanf()` ?

* Let's understand this. 
    * We know that strings are just an array of characters terminated by a `null character`. 
    * Now in the properties of arrays, we have discussed that Arrays always store the memory address of the first character in their variable. 
    * And that's why, when the `string-identifier` or the `string-name` is passed in `scanf()`, it actually sees a pointer pointing to the memory address of its first element. 

    * And this eliminates the need of explicitly using the `&`. It will only make things worse. 
    
    * But wait what? An array variable will be having array-contents as it's value, then how the array is storing the memory address of the first element inside it as it's variable's value! This is not making any sense! 

* Let's make some sense of this as well.
    * first of all, Arrays in C inherently behave like pointers, especially when used as function arguments. 
    * When you pass the name of an array to a function like `scanf()`, it's treated as a pointer to the first element of the array. 
    * Contrary to other variables in C, arrays store the memory address of their first element as their value. So, when you pass a string identifier to `scanf()`, it's essentially passing a pointer to the memory location where the string is stored.

    * So In C, variables that are arrays (or are made to store arrays), become a pointer to the first element of the array, when used as function arguments. So `scanf()` sees `<string-name>` as a pointer to memory, where the `string-name` has occupied its space. 

* This can become crystal clear after understanding this program ~
```c
#include<stdio.h>
void main()
{
    char name4[] = "christine";

    printf("%d\n", &name4[0]);
    printf("%d\n", name4);
}
>>> 
6422294
6422294
```

* Clearly, both are giving the same answer.