# Introduction To Strings

* A string is a sequence of characters stored in an array, typically terminated by a null character ('\0'). 

* In C programming, there's no built-in string data type, so strings are usually represented as arrays of characters.

* The way a group of integers can be contained (or stored) in an array, the same way, characters can also be stored in an array. When those characters are terminated by a null character, it becomes a string.

* We can also say that, *__Character Arrays[]__* in C language are referred to as Arrays.

* A string constant is a 1D-Array of characters, terminated by a null character ('\0')

* Each character in an character array takes one-byte space and the last character is always a null character or '\0'. 

### But What is this null character ('\0') 
* It is a special character used to denote the end of a string. The null character is used as a sentinel value to indicate the termination point of a character array or string.
* The null character is included in the length of the string.
* Suppose you create a string "ankur", then its length will be 6.

## Synatx Of Declaring Strings In C

```c
// Method 1
char <string-name>[] = ""; 

// Method 2
char <string-name>[<number-of-characters>+1];

// Method 3
char <string-name>[<number-of-characters>+1] = {};
```

* For example -

```c
char name[] = {'J', 'O', 'H', 'N', '\0'};

char name2[] = "JOHN";

char name[5] = {'J', 'O', 'H', 'N', '\0'};
```

### Printing A String Normally

* By default, the most easiest way of printing a string is using `printf()` only. But in this case, another format specifier, the `%s` format specfier is used.

```c
#include<stdio.h>
void main()
{
    char name[] = "john";

    printf("name: %s\n", name);
}
>>> name: john
```

### Traversing A String Using for loop

```c
#include<stdio.h>
void main()
{
    char name[] = "John";

    for (int i = 0; i < sizeof(name) - 1; i++)
    {
        printf("%c | ", name[i]);
    }
}
>>> a | n | k | u | r |
```

### Traversing A String Using while loop

```c
#include<stdio.h>
void main()
{
    char name[] = "John";

    int j = 0;
    while (j < sizeof(name)-1)
    {
        printf("%c | ", name[j]);
        j++;
    }
}
>>> a | n | k | u | r |
```

### Traversing A String Using do-while loop

```c
#include<stdio.h>
void main()
{
    char name[] = "John";

    int k = 0;
    do {
        printf("%c | ", name[k]);
        k++;
    } while (k < sizeof(name)-1);

}
>>> a | n | k | u | r |
```

### Traversing A String Using Pointers

```c
#include<stdio.h>
void main()
{
    char name2[] = "john";
    char *np = name2;
    for (int i = 0; i < sizeof(name2) - 1; i++)
    {
        printf("%c | ", *np);
        *np ++;
    }
}
```





## Character Array v/s String