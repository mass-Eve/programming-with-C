# Characteristics Of Structures

In C programming, structures are *user-defined data type* that are used to group together variables of different data types under a single name. 

Here are some key characteristics of structures in C:

## 1. **User-Defined Data Type:** 
 - Structures allows the programmer to define their own data types by grouping variables of different types. 
 - It solves one of the biggest issues that C has in case of *arrays*, which is that it can only store values of one data type. But with structures, we can create arrays have values of different data types.


## 2. **Members or Fields:** 
A structure consists of members or fields, which are basically variables of various data types. And Each member has a unique name (identifier) and a data type (just like normal variable declarations).


## 3. **Declaration:** 
Structures are declared using the `struct` keyword

```c
struct Person {
    char name[50];
    int age;
    float height;
};
```


## 4. **Instance or Object:** 
 - After defining a structure, you can create instances or objects of that structure type. These instances are variables that hold the data for each member.
 - Again this is also done using the `struct` keyword.

```c
// Declaration of an instance of the Person structure
struct Person person1; 
```


## 5. **Dot Operator ( . ):** 
- To access or modify the members of a structure, we make use of the dot operator (`.`). 
- For example:

```c
struct Person {
    char name[50];
    int age;
    float height;
};

struct Person person1; 

strcpy(person1.name, "John");
person1.age = 25;
person1.height = 5.9;
```


## 6. **Initialization:** 
You can initialize a structure at the time of its declaration, similar to initializing other variables.

```c
struct Person person2 = {"Jane", 30, 5.6};
```


## 7. **Nested Structures:** 
It's possible to have structures within structures, creating a nested or hierarchical structure.

    ```c
    struct Address {
        char street[50];
        char city[50];
        int zip_code;
    };

    struct Employee {
        char name[50];
        int emp_id;
        struct Address address;
    };
    ```


## 8. **Memory Allocation:** 
 - All the members of a structure are stored in contiguous or continuous memory locations despite the type of its individual members.
 - The memory occupied by a structure is the sum of the memory occupied by its members. **However, there might be padding added by the compiler for alignment purposes.**


## 9. **Passing Into Functions:**
 - Structures can also be passed as arguments inside the *user-defined* functions.
 - We can either pass the individual elements of a structure into function's argument or we can pass the whole structure as well.
 - We can also pass a pointer to the structure.

## 10. **Pointers To Structures:**
 - We can also create pointers to structures.
 - When using pointer, another syntax is used to access the variables, which is ``` <structure-instance> -> element ```