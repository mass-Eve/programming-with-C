# Introduction To Multi-Dimensional Arrays
* An array of arrays is what a multi dimensional array is.
* Arrays can have any number of dimensions.

## Two Dimensional Arrays or 2D Arrays  
* A 2D array is also known as a matrix.
* To create a 2D array of integer values, we use the following syntax -->
```c
<type> <array-identifier> [no-of-rows][no-of-columns] = { {}, {}, ......, {} }
```
* Example -
```c
int matrix[2][2] = { {1, 1}, {2, 2} };
```

    Visually, it looks like this ~ 
    [
        [ 1 1 ]
        [ 2 2 ] 
                  ]

* __*Important Point*__ - 
> While declaring a multi-dimensional array, it is mandatory to mention the number of columns in the declaration phase, and mentioning the number of rows is not a necessary thing.
 Example ~
```c
// rows = 2 (horizontal)
// columns = 3 (vertical)
int arr[2][3] = {1, 2, 3, 4}


// rows =  (horizontal)
// columns = 4 (vertical)
int arr2[][4] = {1, 2, 5, 8, 6, 87};
```

# To access the element of an array, we have to specify the index of both rows and columns.

## Syntax Of Accesing The Elements Of An Array using printf() statements -->
```c
int matrix[2][2] = { {1, 1}, {2, 2} };

printf("row 0 column 0: %d\n", multi[0][0]);
printf("row 0 column 1: %d\n", multi[0][1]);
printf("row 1 column 0: %d\n", multi[1][0]);
printf("row 1 column 1: %d\n", multi[1][1]);
>>>
1
1
2
2
```

## Syntax Of Accesing The Elements Of An Array *using for loop* -->
```c
// 2D Array
int matrix[2][2] = { {1, 1}, {2, 2} };

// Representation 1
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j <= 1; j++)
        printf("row %d and column %d : multi[%d][%d] : %d\n", i, j, i, j, multi[i][j]);
}
>>> 
row 0 and column 0 : multi[0][0] : 1
row 0 and column 1 : multi[0][1] : 1
row 1 and column 0 : multi[1][0] : 2
row 1 and column 1 : multi[1][1] : 2


// Representation 2
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j <= 1; j++)
        printf("%d  ", multi[i][j]);
    printf("\n");
}
>>> 
1  1
2  2
```


## Syntax Of Accesing The Elements Of An Array *using while loop* -->

```c

// Representation 1
int i = 0;
while (i < 2){
    int j = 0;
    while (j < 2){
        printf("row %d and column %d : multi[%d][%d] : %d\n", i, j, i, j, multi[i][j]);
        j++;
    }
    i++;
}
>>>
row 0 and column 0 : multi[0][0] : 1
row 0 and column 1 : multi[0][1] : 1
row 1 and column 0 : multi[1][0] : 2
row 1 and column 1 : multi[1][1] : 2


// Representation 2
int i = 0;
while (i < 2){
    int j = 0;
    while (j < 2){
        printf("%d  ", multi[i][j]);
        j++;
    }
    printf("\n");
    i++;
}
>>>
1  1
2  2
```


## Syntax Of Accesing The Elements Of An Array using *do-while loop* -->

```c
// Representation 1
int i = 0;
do{
    int j =0;
    do{
        printf("row %d and column %d : multi[%d][%d] : %d\n", i, j, i, j, multi[i][j]);
        j++;
    } while (j < 2);
    i++;
} while (i < 2);
>>>
row 0 and column 0 : multi[0][0] : 1
row 0 and column 1 : multi[0][1] : 1
row 1 and column 0 : multi[1][0] : 2
row 1 and column 1 : multi[1][1] : 2


// Rrepresentation 2
int i = 0;
do{
    int j =0;
    do{
        printf("%d  ", multi[i][j]);
        j++;
    } while (j < 2);
    printf("\n");
    i++;
} while (i < 2);
>>>
1  1
2  2
```

## Updating or Assigning Elements in 2D Arrays ~

```c
int multi[3][2] =
    {
        {1, 1},
        {2, 2}
    };
multi[2][1] = 3;
printf("%d", multi[2][1]);

```
