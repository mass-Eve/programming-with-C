### Receiving multi-words string using gets() and puts()

* `gets()` and `puts()` are two functions that can help us in doing this. 
* `gets()` function can input a string of any number of characters and words.
* while `puts()` function can print it. But the only problem with `puts()` function is that it can only print one variable or constant at a time, that is why you have to specify all the values to be printed in spearate `puts().`
* Also, puts() add a `'\n'` character automatically after the statement inside the `puts()` is printed correctly. So this is a plus of using `puts()`, as we have to specify this explicitly in `printf()` function. 

Let's see how it can be implemented ~

```c
#include<stdio.h>
void main()
{
    char name3[] = {};
    printf("Enter your name: ");

    gets(name);
    puts("Hi");
    puts(name);
}
>>> Enter your name: John           
    Hi
    John                          

>>> Enter your name: John Kris
    Hi
    John Kris
```

* we can also avoid using `puts()` and instead we can use simple `printf()`
```c
#include<stdio.h>
void main()
{
    char name3[] = {};
    printf("Enter your name: ");

    gets(name);
    printf("name: %s", name3);
}
>>> Enter your name: John               
    name: John                          

>>> Enter your name: John Kris
    name: John Kris
```