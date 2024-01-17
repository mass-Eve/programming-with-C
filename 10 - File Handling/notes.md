# *fseek() & ftell()*

*when a file is opened freshly, just now, the file pointer's location is always set to 0, which is the beginning of the file!*

General Syntax 
```c
fseek( <file-pointer>, offset = <int-bytes>, whence = SEEK_SET | SEEK_CUR | SEEK_END );
```
```c
ftell( <file-pointer> );
```

## To get the current location of the cursor or the file-pointer, use the following code snippet ~

```c
// fseek(<file-pointer>, offset = 0, whence = SEEK_CUR);
fseek(fp, 0, SEEK_CUR);

int position = ftell(fp);
printf("The cursor is at %d byte from the starting of the file\n", position);
```

## To change the cursor or file pointer's position from the starting or the beginning of the file

```c
// Set the file pointer to 10th byte from the beginning of the file
fseek(fp, 10, SEEK_SET);

int position = ftell(fp);
printf("The cursor is at %d byte from the starting of the file\n", position);
```

## 