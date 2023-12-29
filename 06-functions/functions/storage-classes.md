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

| Storage Class Type | Where they are stored? | How To Declare | Default initial value | Scope | Lifespan | Important Note |
| :----------------: | :--------------------: | :------------: | :-------------------: | :---: | :------: | :------------: |
| Automatic | Memory | using `auto` keyword | An unpredicted value, also known as `GARBAGE VALUE` | Local to the block in which the variable is defined. | Till the control remains within the block in which the variable is defined. | |
| Register | CPU Registers | using `register` keyword | An unpredicted value, also known as `GARBAGE VALUE` | Local to the block in which the variable is defined. | Till the control remains within the block in which the variable is defined. | It is not necessary that after using the `register` keyword, the value will be stored in a register. This is because the number of registers in a CPU are limited. In such a case, it will work the same as `auto`|
| Static | Memory | using `static` keyword | Zero (0) | Local to the block in which the variable is defined. | Value of the variable persists between the different function calls. | `static` means, the variable will be declared once, not again and again. And that is why `static` variables don't disappear when the function is no longer active. Their value persist and whenever the control comes back to their function, the static variables have the same value they had from last time's call |
| External | Memory | using `extern` keyword | Zero (0) | Global Scope | As long as the program's execution doesn't come to an end.