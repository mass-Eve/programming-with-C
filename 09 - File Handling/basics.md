# Introduction To File Handling With C

## What is a File ?
A file is a container in a computer system for storing information.

## What is File Handling ?
File handing is the process in which we perform create, open, read, write, and close operations on the file using the power of C language.

## Why do we need File Handling ?


## Types Of Files
A file can be classified into two basic types. This classification is based on the type of data tje file is storing.
01. *__Text File__*: 
    - A text file contains data in the form of ASCII characters and is generally used to store a stream of characters.
    - All text files are terminated by a new-line character `("\n")`.
    - They are the simplest form of files and thus can be read and write by any text editor.
    - They are created using a `.txt` extension.

02. *__Binary File__*:
    - A Binary file contains data in binary format, i.e 0s and 1s.
    - They contain data that is stored in a similar manner to how it is stored in the main memory.
    - They are not in _Human Readable_ format.
    - Since they are not easily readable, they are more secure than text files.
    - They are generally stored with `.bin` extension, but all the file extensions other than text files are just binary.

## C File Operations 
* _File Operations_ are basically the different operations or manipulations that can be carried out on a file using the capabilities of C Language.
* The different file operations that are available are ~
    01. Opening An Existing File.
    02. Creating A New File.
    03. Reading the contents of a file.
    04. Writing New Content into a file.
    05. Closing the file being opened.
* All the file operations are performed using some special functions offered by C language.

## Some Prerequisites
Before learning to open and close a file in C, there are a bunch of things to know before.
- **Quesn 01:** What is a File Pointer ?
    - A file pointer is a reference to a particular position in the opened file.
    - It is used in file handling to perform all file operations such as read, write, close, etc.
    - We use a keyword `FILE`, which is a macro, used to declare the file pointer variable. The `FILE` macro is defined inside `<stdio.h>` header file.
<!-- - **Quesn 02:** Okay, Now what is this `macro` ? -->


## File Open Modes
* File opening modes are simple english alphabets, which specify the file operations that are allowed on a file which is about to get open. 
* They are like the rules governing the file handling process, telling the compiler what functionalities to enable for the user to manipulate.
* They are also known as *Access Modes*.
* They are passed as an argument to the `fopen()` function.
* The various file opening modes available in 'C'. 
* The file opening modes for a text file are as follows ~

| File Opening Mode | Operations Allowed | Default Cursor (or Pointer) Position | Description | Important Points |
| :---------------: | :----------------: | :--------------------------: | :---------: | :--------------: |
| _"r"_ | `Only Reading` | Start of the file (0 position) | If the file is opened successfully by the `fopen()` function, it loads the file into the memory and sets up a pointer which points to the first character in it. | A `NULL` is returned by fopen() in "r" mode, if the file doesn't exist or if the file can not be opened. |
| _"w"_ | `Only Writing` | | If the file exist, all the content is truncated before writing any new content. If the file doesn't exist, it creates one with the same name and path details. | Make sure no important data is there in the file, as it will be truncated. If the file can not be opened, a `NULL` is returned. | 
| _"a"_ | `Only Appending`. Means Adding of content at the end of the file | End of the file | If the file is opened successfully by the `fopen()` function, it loads the file into the memory and sets up a pointer which points to the first character in it. If the file doesn't exist, it creates one with the same name and path details. | A `NULL` is returned by `fopen()` function, if the file can not be opened. |
| _"r+"_ | `Reading existing file content`; `Writing new content in the file`; `Modifying the pre-existing contents of the file` | 
| _"w+"_ | 
| _"a+"_ | `Reading the pre-existing contents of the file`; `Appending new content in the file`; | | | Can not modify the existing content