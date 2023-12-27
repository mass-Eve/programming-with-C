                                    Introduction To Arrays

#### Introduction
* An Array is a collection of data items of the same type.

* All the items are stored at contiguous memory locations.

* It can also store the collection of derived data types, such as pointers, structures etc....

* A array can be single dimensional or multi-dimensional array.

* A one-dimensional array is like a list, while, a two-dimensional array is like a table..

* We can create arrays of any number-dimension.

#### Syntax Of Decalring An Array

    <data-type-of-array> <identifier>[<total no.of-elements to be stored in the array>];

    >>> This will create an empty array which can hold a total of <length> values of <data-type>.

#### Syntax Of Declaring A + Initialising An Array

    <data-type-of-array> <identifier>[<total no.of-elements to be stored in the array>] = {<all the values to be stored, separated by a comma (,)>} ;

#### Examples ~

```c
// create an empty array that can store 4 integer values.
int marks[4];

// create an array having 4 integer values as well.
int marks[4] = {45, 48, 39, 31};
```

### Accessing the elements of an Array ~
* The elements of an array are accessed on the basis of indexing values.
* All the elements inside an array are indexed from 0 to ((length-of-array) - 1).

#### Accessing The elements Of An Array Using printf() statements.

```c
int marks[4] = {45, 48, 39, 31};
printf("The marks of Student 1 are: %d", marks[0]);

>>> 45
```

#### Accessing elements of an Array using for loop.

```c
printf("using for loop - \n");
for (int i = 0; i < 4; i++)
{
    printf("Marks of Student %d: %d\n", (i+1), marks[i]);
}
```

#### Accessing elements of an array using while loop.

```c
printf("using while loop - \n");
int j = 0;
while (j < 4)
{
    printf("Marks of Student %d: %d\n", (j+1), marks[j]);
    j++;
}
```

#### Accessing elements of an array using do-while loop.

```c
printf("using do-while loop - \n");
int k = 0;
do{
    printf("Marks of Student %d: %d\n", (k+1), marks[k]);
    k++;
} while (k < 4);
```
