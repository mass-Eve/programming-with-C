# Representation Of Arrays In Memory

The data items in an array are stored in continuous memory location, and this fact is applicable to all types of array, 1D, 2D or multi-dimensional arrays

```c
// A 2x2 Matrix
int arr[2][2] = 
{
    {1, 1}
    {2, 2}
            }
```

|             | column = 0 | column = 1 |
| :----:      | :-------:  | :-------:  |
| __row = 0__ |  1 (0,0)   |  1 (0,1)   |
| __row = 1__ |  2 (1,0)   |  2 (1,1)   |


There can be two ways in which the elements of an array can be accessed from the memory ~
01. *__Row Major Order__* : In this order, elements of each row are stored one after the other.

    * For example - 
    ```c
    int array[2][2] = {
        { 0, 0 },
        { 1, 1 }
    };
    ```
    is stored as [0 | 0 | 1 | 1]
02. *__Column Major Order__* : In this order, elements of each row are stored column-wise.

    * For example - 
    ```c
    int array[2][2] = {
        { 0, 0 },
        { 1, 1 }
    };
    ```
    is stored as [0 | 1 | 0 | 1]