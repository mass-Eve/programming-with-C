### Example 3: Using `fscanf()` and `fprintf()` for Reading and Writing:

```c
#include <stdio.h>

int main() {
    // Open a text file in write mode
    FILE *writeFile = fopen("example.txt", "w");

    // Check if the file is opened successfully
    if (writeFile == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }

    // Write data to the file using fprintf
    fprintf(writeFile, "Hello, %s!\n", "World");

    // Close the write file
    fclose(writeFile);

    // Open the file in read mode
    FILE *readFile = fopen("example.txt", "r");

    // Check if the file is opened successfully
    if (readFile == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }

    // Read data from the file using fscanf and print to the console
    char buffer[100];
    fscanf(readFile, "%s", buffer);
    printf("Content of the file: %s\n", buffer);

    // Close the read file
    fclose(readFile);

    return 0;
}
```

These examples demonstrate basic file operations using standard C library functions such as `fopen()`, `fclose()`, `fgetc()`, `fputc()`, `fscanf()`, and others. Always make sure to check if file operations are successful and handle errors appropriately.


Certainly! Here's an example program that demonstrates the use cases of `feof()`, `fseek()`, and `rewind()` along with other file operations:

```c
#include <stdio.h>

int main() {
    // Writing to a text file
    FILE *writeFile = fopen("example.txt", "w");

    if (writeFile == NULL) {
        printf("Error opening the file for writing!\n");
        return 1;
    }

    fprintf(writeFile, "Line 1: Hello, World!\n");
    fprintf(writeFile, "Line 2: This is a sample file.\n");

    fclose(writeFile);

    // Reading from the text file using fgetc and feof
    FILE *readFile = fopen("example.txt", "r");

    if (readFile == NULL) {
        printf("Error opening the file for reading!\n");
        return 1;
    }

    printf("Content of the file using fgetc and feof:\n");

    int ch;
    while ((ch = fgetc(readFile)) != EOF) {
        putchar(ch);

        // Check for end of file using feof
        if (feof(readFile)) {
            printf("\nReached end of file.\n");
            break;
        }
    }

    fclose(readFile);

    // Reading from the text file using fseek
    FILE *seekFile = fopen("example.txt", "r");

    if (seekFile == NULL) {
        printf("Error opening the file for seeking!\n");
        return 1;
    }

    printf("\nContent of the file using fseek:\n");

    // Move the file pointer to the beginning using rewind
    rewind(seekFile);

    // Move the file pointer to the start of Line 2
    fseek(seekFile, 18, SEEK_SET);

    while ((ch = fgetc(seekFile)) != EOF) {
        putchar(ch);
    }

    fclose(seekFile);

    return 0;
}
```

In this program:

- `feof()` is used to check for the end of the file while reading using `fgetc()`.
- `fseek()` is used to move the file pointer to a specific position in the file.
- `rewind()` is used to move the file pointer to the beginning of the file.
