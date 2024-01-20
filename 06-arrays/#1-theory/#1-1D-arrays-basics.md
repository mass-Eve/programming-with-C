# Introduction To Arrays

* An Array is a collection of data items of the same type.

* All the items are stored at contiguous (or continuous) memory locations.

* It can also store the collection of derived data types, such as pointers, structures etc....

* A array can be single dimensional or multi-dimensional array.

* A one-dimensional array is like a list, while, a two-dimensional array is like a table..

* We can create arrays of any number-dimension.

* An array is also known by, a *__subscripted variable__*.

# Declaration of Arrays
Arrays can be declared in many fashions, but there are a few important point which have to be kept in mind while declaring the arrays.

1. When we are only declaring the array and not initialising it any value, we have to mention the size of the array.
2. When we are declaring and initialising the array in the same statement, we need not to mention the size of the array. It is completely optional in that case.
3. Whenever we declare an array with a higher size and don't fill all of its values, the compiler assigns all the left-over positions with a garbage value, which is generally 0.
    

## Syntax Of Decalring An Array

    <data-type-of-array> <identifier>[<total no.of-elements to be stored in the array>];

    >>> This will create an empty array which can hold a total of <length> values of <data-type>.

## Syntax Of Declaring A + Initialising An Array

    <data-type-of-array> <identifier>[<total no.of-elements to be stored in the array>] = {<all the values to be stored, separated by a comma (,)>} ;


## Examples ~

```c
// create an empty array that can store 4 integer values -->
// Declare an array
int marks[4];

// create an array having 4 integer values as well -->
int marks[4] = {45, 48, 39, 31};

// create an array that can store 4 integer values -->
int rolls[4] = {2, 6};       // remaining two can be added anytime.

// we can also create arrays without initialising their length -->
int classes[] = {1, 2, 3, 4, 5}         // In this way, the length becomes the total number of elements.

// we can also assign the length of an array in this way -->
int classes[] = {1, 2, 3, 4, 5, [25] = 26}      // With this, the compiler wll assign the length of the array to 25 elements

// create an array of character type, storing a colour
char colour[] = {'B', 'r', 'o', 'w', 'n', '\0'};
char colour2[] = "Green";
```

# Accessing the elements of an Array ~
* The elements of an array are accessed on the basis of indexing values.
* All the elements inside an array are indexed from 0 to ((length-of-array) - 1).
* Syntax ~
```c
array_name[index-position] ;
```

## Accessing The elements Of An Array Using simple printf() statements.

```c
int marks[4] = {45, 48, 39, 31};
printf("The marks of Student 1 are: %d", marks[0]);

>>> 45
```

## Accessing the elements of an Array using *for loop*.

```c
printf("using for loop - \n");
for (int i = 0; i < 4; i++)
{
    printf("Marks of Student %d: %d\n", (i+1), marks[i]);
}
```

## Accessing the elements of an array using *while loop*.

```c
printf("using while loop - \n");
int j = 0;
while (j < 4)
{
    printf("Marks of Student %d: %d\n", (j+1), marks[j]);
    j++;
}
```

## Accessing elements of an array using *do-while loop*.

```c
printf("using do-while loop - \n");
int k = 0;
do{
    printf("Marks of Student %d: %d\n", (k+1), marks[k]);
    k++;
} while (k < 4);
```


## Syntax of Assigning values to the indexes of an array.

```c
// It is done by accessing those positions using the index values
array_name[index-position] = <value-to-be-assigned> ;
```

```c

int marks[5] = {1, 2, 3};
marks[3] = 4;
marks[4] = 5;

// be initialising the indexes directly.
int rolls[5] = {[2] 2, [3] 3};
// or
int marks4[5] = {[2] = 2, [3] = 3};

```

*__Important Note__* --> 

> In C, if you don't fill the array completely, or don't assign a value to all the indexes of an array, then the left over indexes are assigned 0 automatically by the compiler.
What I mean is that, here only pos(2) and pos(3) are equipped with values. The leftover positions, i.e 0,1,4 , will be assigned 0.

```c
int marks[5] = {[2] = 2, [3] = 3};
for (int i = 0; i < 5; i++)
{
    printf("marks[%d]: %d\n", i, marks4[i]);
}
>>> 
    marks[0]: 0
    marks[1]: 0
    marks[2]: 2
    marks[3]: 3
    marks[4]: 0
```

## Knowing the Size of an Array
```c
// To get the size of an array, we use sizeof() function ~
sizeof() function returns the size of a type in bytes. 

// For example ~

int marks[5] = {[2] 2, [3] 3};
printf("length of the array marks[] is %d", sizeof(marks));
>>> 
20 Bytes
// In my architecture, int takes 4 bytes of spaces, therefore, 20/4 = 5. 
// Which means, the size of the marks[] is 5.
```