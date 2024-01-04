Dynamic memory allocation refers to the process of allocating memory at runtime, as opposed to compile-time, during the execution of a program. In languages like C and C++, dynamic memory allocation is achieved using functions such as malloc, calloc, realloc, and free.

---------------------------------------------------------------------------

# Topic 03 - Structures 

In C, a structure is a user-defined data type that allows you to group together variables of different data types under a single name. Each variable within the structure is referred to as a member or field. Structures provide a way to organize and represent complex data in a more readable and manageable form.

Here's a simple example of a structure in C:

```c
#include <stdio.h>

// Define a structure named "Person"
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a variable of type "struct Person"
    struct Person person1;

    // Assign values to the members of the structure
    strcpy(person1.name, "John");
    person1.age = 25;
    person1.height = 5.9;

    // Access and display the values
    printf("Person 1\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}
```

In this program, a structure named "Person" is defined, which has three members: `name`, `age`, and `height`. The `main()` function declares a variable of type `struct Person` and initializes its members.

### Structure Operations:

1. **Initialization:**
   ```c
   struct Person person1 = {"John", 25, 5.9};
   ```

2. **Accessing Members:**
   ```c
   printf("Name: %s\n", person1.name);
   printf("Age: %d\n", person1.age);
   printf("Height: %.2f\n", person1.height);
   ```

3. **Modifying Members:**
   ```c
   person1.age = 26;
   ```

### Nested Structures:

Structures can also be nested within other structures. Here's an example:

```c
#include <stdio.h>

// Define a nested structure named "Address"
struct Address {
    char city[50];
    char state[50];
};

// Define a structure named "Person" with a nested structure "Address"
struct Person {
    char name[50];
    int age;
    struct Address address;
};

int main() {
    // Declare a variable of type "struct Person"
    struct Person person1;

    // Assign values to the members of the structure
    strcpy(person1.name, "John");
    person1.age = 25;
    strcpy(person1.address.city, "New York");
    strcpy(person1.address.state, "NY");

    // Access and display the values
    printf("Person 1\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("City: %s\n", person1.address.city);
    printf("State: %s\n", person1.address.state);

    return 0;
}
```


--------------------------------------------------------------------------------------------------

# Topic04 - Unions

In C, a union is a user-defined data type that allows you to store different data types in the same memory location. Unlike structures, where each member has its own memory space, all members of a union share the same memory location. The size of a union is determined by the size of its largest member.

Here's a simple example of a union in C:

```c
#include <stdio.h>

// Define a union named "MyUnion"
union MyUnion {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    // Declare a variable of type "union MyUnion"
    union MyUnion myVar;

    // Assign values to different members of the union
    myVar.intValue = 42;
    printf("Integer Value: %d\n", myVar.intValue);

    myVar.floatValue = 3.14;
    printf("Float Value: %.2f\n", myVar.floatValue);

    strcpy(myVar.stringValue, "Hello, Union!");
    printf("String Value: %s\n", myVar.stringValue);

    // Accessing the members after reassigning
    printf("After reassigning\n");
    printf("Integer Value: %d\n", myVar.intValue);
    printf("Float Value: %.2f\n", myVar.floatValue);
    printf("String Value: %s\n", myVar.stringValue);

    return 0;
}
```

----------------------------------------------------------------------------------

# Topic 05 -  Differences Between Structures & Unions

| Feature                | Structures                         | Unions                             |
|------------------------|-----------------------------------|------------------------------------|
| Memory Allocation      | Members have separate memory space | Members share the same memory space|
| Memory Usage           | Multiple pieces of data stored     | Different types in the same memory|
| Member Access          | Individual member access           | Only one member accessed at a time|
| Initialization         | Members can be independently initialized | Only one member should be initialized at a time|
| Behavior               | Members retain values independently| Changing one member may affect others|
| Use Cases              | Representing related data          | Saving memory with different types|

--------------------------------------------------------------------------------------------

# Topic 06 - Files

a file is a collection of data stored on a secondary storage device, such as a hard disk or SSD. Files can be classified into two main types: text files and binary files. Text files contain human-readable characters, while binary files may contain any type of data in a format not directly readable by humans. File operations in C are managed through standard library functions.

Here are some programs demonstrating various file operations using text files in C:

### Example 1: Writing to a Text File using `fputc()`:

```c
#include <stdio.h>

int main() {
    // Open a text file in write mode
    FILE *file = fopen("example.txt", "w");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }

    // Write characters to the file using fputc
    fputc('H', file);
    fputc('e', file);
    fputc('l', file);
    fputc('l', file);
    fputc('o', file);

    // Close the file
    fclose(file);

    return 0;
}
```

### Example 2: Reading from a Text File using `fgetc()`:

```c
#include <stdio.h>

int main() {
    // Open a text file in read mode
    FILE *file = fopen("example.txt", "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }

    // Read characters from the file using fgetc and print to the console
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
```

### Example 3: Using `fscanf()` and `fprintf()` for Reading and Writing:

```c
#include <stdio.h>

int main() {
    // Open a text file in write mode
    FILE *writeFile = fopen("example.txt", "w");

    // Check if the file is opened successfully
    if (writeFile == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }

    // Write data to the file using fprintf
    fprintf(writeFile, "Hello, %s!\n", "World");

    // Close the write file
    fclose(writeFile);

    // Open the file in read mode
    FILE *readFile = fopen("example.txt", "r");

    // Check if the file is opened successfully
    if (readFile == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }

    // Read data from the file using fscanf and print to the console
    char buffer[100];
    fscanf(readFile, "%s", buffer);
    printf("Content of the file: %s\n", buffer);

    // Close the read file
    fclose(readFile);

    return 0;
}
```

These examples demonstrate basic file operations using standard C library functions such as `fopen()`, `fclose()`, `fgetc()`, `fputc()`, `fscanf()`, and others. Always make sure to check if file operations are successful and handle errors appropriately.


Certainly! Here's an example program that demonstrates the use cases of `feof()`, `fseek()`, and `rewind()` along with other file operations:

```c
#include <stdio.h>

int main() {
    // Writing to a text file
    FILE *writeFile = fopen("example.txt", "w");

    if (writeFile == NULL) {
        printf("Error opening the file for writing!\n");
        return 1;
    }

    fprintf(writeFile, "Line 1: Hello, World!\n");
    fprintf(writeFile, "Line 2: This is a sample file.\n");

    fclose(writeFile);

    // Reading from the text file using fgetc and feof
    FILE *readFile = fopen("example.txt", "r");

    if (readFile == NULL) {
        printf("Error opening the file for reading!\n");
        return 1;
    }

    printf("Content of the file using fgetc and feof:\n");

    int ch;
    while ((ch = fgetc(readFile)) != EOF) {
        putchar(ch);

        // Check for end of file using feof
        if (feof(readFile)) {
            printf("\nReached end of file.\n");
            break;
        }
    }

    fclose(readFile);

    // Reading from the text file using fseek
    FILE *seekFile = fopen("example.txt", "r");

    if (seekFile == NULL) {
        printf("Error opening the file for seeking!\n");
        return 1;
    }

    printf("\nContent of the file using fseek:\n");

    // Move the file pointer to the beginning using rewind
    rewind(seekFile);

    // Move the file pointer to the start of Line 2
    fseek(seekFile, 18, SEEK_SET);

    while ((ch = fgetc(seekFile)) != EOF) {
        putchar(ch);
    }

    fclose(seekFile);

    return 0;
}
```

In this program:

- `feof()` is used to check for the end of the file while reading using `fgetc()`.
- `fseek()` is used to move the file pointer to a specific position in the file.
- `rewind()` is used to move the file pointer to the beginning of the file.

Make sure to adjust the file paths and error-handling as needed for your specific use case.
