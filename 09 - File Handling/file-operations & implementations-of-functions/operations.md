# Let's start our journey with file handling.......

## Operation 1 - Open & Close A File 
* To open a file, the first thing we do is to declare `a file pointer` using the `FILE` *macro*.

* In second step, we'll create a *file handle* and will assign it a value using `fopen()` function. The name or the identifier of the file handle will be the same as we have given to the *file-pointer*.

* In the `fopen()` part, we'll also define the file mode in which we want to open the file. This mode will decide what functionalities you can access or what powers do you have to manipulate that file.

* The next step involves checking the value inside the *file-handle* or the *file-pointer*. 
    - In this step, we'll check if the value returned by `fopen()` is `NULL`or not.
    - `fopen()` function has a unique property that it returns a `NULL` if the file can not be opened. That's why it is important to check the output of `fopen()` before performing any operation.

Lets' see this in action

```c
#include<stdio.h>
#include<stdlib.h>

void main()
{
    // The first step in file handling is to create a file pointer using the FILE macro
    FILE *fp ;

    // Let's open the file in reading mode
    fp = fopen("name.txt", "r");

    // Lets' check if the file is opened successfully or not.
    if (fp == NULL)
    {
        printf("An Error Occurred. The file can not be opened. Closing the program.....");
        exit(0);
    }
    else{
        printf("File opened successfully. Ready for manipulations.....");
    }

    // Let's close the file now.
    fclose(fp);
}
```

## Operation 2 - Creating A New File

Often times, it is possible that the file you are trying to open might not exist on that particular location. In such a condition, you are left with two options. 
01. Either you create the file manually,
02. Give the location where the file is actually present, or
03. Create the file in that directory only without doing it manually.

While the first two options are seemingly staright-forward, they require some manual work to be done. But the third option is seems to be very easy and automatic, isn't it? This is also something we are going to try now...

* The `fopen()` function that we have used previously to open a file is the same function that we are going to use now as well. But before that we need to understand the function of 
* But before trying it out, here is something that you should know.