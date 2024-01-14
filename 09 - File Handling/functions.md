# Functions Used In File Handling

This is a cheatsheet of all the important functions used in file handling.

| S. No | Function | Description | Special Note |
| :---: | :------: | :---------: | :----------: |
| 1. | `fopen()` | Opens a file and sets it up to work with C | If the file can not be opened, it returns `NULL` |
| 2. | `fclose()` | Closes an opened file and removes all the access given to C to manipulate its content |
| 3. | 
| 4. | 
| 5. | 
| 6. | 
| 7. | 
| 8. | 
| 9. | 
| 10. | 
| 12. | 
| 13. | 
| 14. | 

## fopen() Function
* The primary task of this function is to open the file in the desired mode.
* Syntax of usage - 
```c
// declare a file pointer
FILE *fp;

// Assign the file pointer a value
fp = fopen("<file-name>", "<file-open-mode>")
```
* 