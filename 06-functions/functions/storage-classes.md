# Introduction To Storage Classes

* Until now, we know that variables are declared in this way - `<type> <identifier> ;`. But this is not the complete, there's something missing in it. It is *Storage Class*. The reason we didn't got any error without declaring it was because they have some defaults, as a result, the compiler pressumed a storage class depending upon the context in which the variable is used.

* To define a variable fully, we have to declare its `storage class` as well.

* In simple words, storage classes in C define how variables behave in terms of their storage (memory location), visibility, and lifespan within a program. They help in managing the memory used by variables and determine how accessible and persistent these variables are.

* From the C Compiler's point of view, a variable name identifies some physical location within the computer where the string of bits representing the contents (value) of the variable is stored. There are two types of locations in a computer where such a value may be kept. They are - *Memory* & *CPU Registers*.

* Now the storage class of the variable is the thing that will determine in which of the following two types of locations, the value will be stored in.

* The storage class of a variable tells us a lot of things, including -
    01. Where the value of the variable will be stored.
    02. What will be the initial value of the variable, if not specified by the programmer.
    03. What is the scope of the variable.
    04. What is the life of the variable i.e how long the variable will exist.

## Types Of Storage Classes In C ~
There are four types of storage classes in C.
01. Automatic Storage Classes.
02. Register Storage Classes.
03. Static Storage Classes.
04. External Storage Classes.

<!-- ### Features Of Variables defined under Automatic Storage Classes.
01. The values of the variable is stored in the memory -->

| Storage Class Type | Where they are stored? | How To Declare | Default initial value | Scope | Lifespan |
| :----------------: | :--------------------: | :------------: | :-------------------: | :---: | :------: |
| Automatic | Memory | using `auto` keyword | An unpredicted value, also known as `GARBAGE VALUE` | Local to the block in which the variable is defined. | Till the control remains within the block in which the variable is defined. |
| Register | CPU Registers | using `register` keyword | An unpredicted value, also known as `GARBAGE VALUE` | Local to the block in which the variable is defined. | Till the control remains within the block in which the variable is defined. | 
| Static | Memory | using `static` keyword | Zero (0) | Local to the block in which the variable is defined. | Value of the variable persists between the different function calls. | 
| External | Memory | using `extern` keyword | Zero (0) | Global Scope | Till the end of the program.

## Declaring Storage Classes ~
```c
<storage-class> <var-data-type> <-var-identifier>
```

## Important Notes To Keep In Mind ~

*__Registers Storage Class__*
It is not necessary that after using the `register` keyword, the value will get stored in a register. This is because the number of registers in a CPU are limited. In such a case, it will work the same as `auto` keyword.


*__Static Storage Class__*
* `static` means, the variable will be declared once, not again and again. 
And that is why `static` variables don't disappear when the function is no longer active. Their value persist and whenever the control comes back to their function, the static variables have the same value they had from last time's call.
* For example -

```c
int demo_func()
{
    int i = 1;
    printf("%d", i);
    i++;
}
```

* Here, the line `int i = 1;` will run only-and-only `ONE` time, does not matter if the function is called a hundred times. The 100th time, it will probably take 100 or 101, and not 1. 

* Lifecycle of `static` variables ~
    * When used with local variables, they retain their values between function calls. They are created once and persist throughout the program's execution.
    * When used with global variables, they exist for the entire program and are only accessible within the file where they are declared.
    * When used with functions, it limits their visibility to the file where they are declared.

## When to use Which Storage Class?

1. **auto:**
    - By default, all local variables are `auto`. So, you don't explicitly use the `auto` keyword.
    - Use when you need a temporary variable with a limited scope, and you want it to be automatically created and destroyed within a block.

2. **register:**
    - Modern compilers are quite good at optimizing register allocation, so using `register` explicitly is often unnecessary.
    - Use only when you are certain that storing a variable in a register will significantly improve the program's performance.

3. **static:**
    - **Local Static Variables:**
      - When you want a variable to retain its value between function calls.
      - When you want to initialize a variable only once, and not every time the function is called.
    - **Global Static Variables:**
      - When you want a variable to have file scope and not be accessible outside the current file.
    - **Static Functions:**
      - When you want to limit the visibility of a function to the current file.

4. **extern:**
    - When you need to use a variable or function that is defined in another file.
    - Use `extern` to declare the existence of a variable or function, and provide the actual definition during the linking phase.
    - Use `extern` to declare the variables that are being used by almost all the functions in the program.
    - These variables will remain active in the memory till the end of the program, therefore, will consume a lot of memory. Use them wisely!