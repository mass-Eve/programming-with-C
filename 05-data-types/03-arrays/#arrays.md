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

    <!-- create an empty array that can store 4 integer values -->
    int marks[4];

    <!-- create an array having 4 integer values -->
    int marks[4] = {45, 48, 39, 31};

#### Accessing The elements Of An Array ~
* The elements of an array are accessed on the basis of indexing values.
* All the elements inside an array are indexed from 0 to ((length-of-array) - 1).

      int marks[4] = {45, 48, 39, 31};
      printf("The marks of Student 1 are: %d", marks[0]);

      >>> 45
