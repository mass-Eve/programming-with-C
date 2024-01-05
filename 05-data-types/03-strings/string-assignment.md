# String Assignment

* String Assignment is a lot complicated in C, in comparision to other programming languages.
* A lot of things are not very normal to digest, to be honest.
* I tried my best to take care of every aspect in a simple way.
* Let's try to make sense of things ~

```c
#include<stdio.h>
void main()
{
    char str1[] = "John";
    char str2[] = "Margret";
}
```

## Type1 - Normal String-to-String Assignment

```c
#include<stdio.h>
void main()
{
    char str1[] = "John";
    char str2[] = "Margret";

    str1 = str2;
    printf("str1: %s", str1);    
}
>>> error: assignment to expression with array type
```

## Type2(a) - Taking String as lvalue and a Character Constant as rvalue

```c
#include<stdio.h>
void main()
{
    char str1[] = "John";
    char str2[] = "Margret";

    str1 = 'a';
}
>>> error: assignment to expression with array type
```


## Type2(b) - Taking String as lvalue and a Character Constant as rvalue

```c
#include<stdio.h>
void main()
{
    char str1[] = "John";
    char str2[] = "Margret";

    str1 = "a";
}
>>> error: assignment to expression with array type
```


## Type3(a) - Taking String-Array as lvalue and a Character Constant as rvalue

```c
#include<stdio.h>
void main()
{
    char str1[] = "John";
    char str2[] = "Margret";

    str1[] = 'a';
}
>>> error: expected expression before ']' token
```

## Type3(b) - Taking String-Array as lvalue and a Character Constant as rvalue, but passing an index value.

```c
#include<stdio.h>
void main()
{
    char str1[] = "John";
    char str2[] = "Margret";

    str1[0] = 'M';
    printf("str1: %s\n", str1)
}
>>> No Error
    Mohn
```


## Type3(c) - Taking String-Array as lvalue and a Double Quote String as rvalue

```c
#include<stdio.h>
void main()
{
    char str1[] = "John";
    char str2[] = "Margret";

    str1[0] = "M";
    printf("str1: %s\n", str1)
}
>>> Error:- warning: assignment makes integer from pointer without a cast [-Wint-conversion]
```


## Type4 - Taking String-Array on both sides 

```c
#include<stdio.h>
void main()
{
    char str1[] = "John";
    char str2[] = "Margret";

    str1[0] = str2[0];
    printf("str1: %s\n", str1)
}
>>> No Error
    Mohn
```


## Type5 - Assignment Using String Pointer

```c
#include<stdio.h>
void main()
{
    char *str1 = "John";
    char *str2 = "Margret";
    str1 = str2;

    printf("str1: %s", str1);
    printf("str2: %s", str2);
}
>>> 
    s1: str1
    s2: str1
```

```c
#include<stdio.h>
void main()
{
    char *str1 = "John";
    // char *str2 = "Margret";
    str1 = "Margret";

    printf("str1: %s", str1);
    // printf("str2: %s", str2);
}
>>> 
    s1: Margret
```