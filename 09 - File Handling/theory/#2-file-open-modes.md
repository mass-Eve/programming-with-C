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