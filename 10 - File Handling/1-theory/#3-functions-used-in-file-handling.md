| Serial No. | Function      | Max Args | Min Args | Syntax                             | Description                                                                                  | Return Type | Important Notes                                  |
|------------|---------------|----------|----------|------------------------------------|----------------------------------------------------------------------------------------------|-------------|---------------------------------------------------|
| 1 | `fopen()` | 2 | 2 | file-pointer = fopen(filename, open-mode); | Opens a file with the specified mode | FILE*       | Returns a pointer to the file structure. |
| 2 | `fclose()` | 1 | 1 | fclose(file-pointer); | Closes the specified file. | int | Returns 0 on success, EOF on failure. |
| 3          | fprintf()     | Variable | Variable | int fprintf(FILE *stream, const char *format, ...); | Writes formatted data to the file.                                                         | int         | Returns the number of characters written.          |
| 4          | fscanf()      | Variable | Variable | int fscanf(FILE *stream, const char *format, ...);  | Reads formatted data from the file.                                                        | int         | Returns the number of items successfully read.    |
| 5          | fgetc()       | 1        | 1        | int fgetc(FILE *stream);           | Reads a character from the file.                                                           | int         | Returns the read character or EOF on error.        |
| 6          | fgets()       | 3        | 2        | fgets(dataToBeRead, n-bytes, file-pointer);        | Reads a line from the file into the string.                                                | char*       | Returns the read string or NULL on error.          |
| 7          | fputc()       | 2        | 2        | int fputc(int character, FILE *stream);             | Writes a character to the file.                                                            | int         | Returns the written character or EOF on error.    |
| 8          | fputs()       | 2        | 2        | int fputs(const char *str, FILE *stream);           | Writes a string to the file.                                                               | int         | Returns a non-negative value on success, EOF on failure. |
| 9          | rewind()      | 1        | 1        | void rewind(FILE *stream);          | Sets the file position indicator to the beginning of the file.                                | void        | No return value.                                  |
| 10         | feof()        | 1        | 1        | int feof(FILE *stream);            | Checks the end-of-file indicator for the file.                                              | int         | Returns non-zero if end-of-file reached, 0 otherwise. |
| 12         | ferror()      | 1        | 1        | int ferror(FILE *stream);          | Checks the error indicator for the file.                                                   | int         | Returns non-zero if an error occurred, 0 otherwise.  |
| 13         | fread()       | 4        | 4        | size_t fread(void *ptr, size_t size, size_t count, FILE *stream); | Reads data from the file into the specified buffer.                           | size_t      | Returns the number of items read.                   |
| 14 | `fseek()` | 3 | 3 | fseek(file-pointer, offset-position, whence); | Sets the file position indicator to a specified location. | int         | Returns 0 on success, non-zero on failure.         |
| 15         | ftell()       | 1        | 1        | long ftell(FILE *stream);           | Returns the current file position indicator.                                                | long        | Returns the current file position or -1L on failure. |