# Sorting algorithms using template C++
(All of these implementations sort elements increasing order)
- Bubble sort
- Insertion sort
- Quick sort

## Specifications
### Bubble sort
* *const bool* &nbsp;&nbsp;bubbleSort &nbsp;( **T***, **const size_t** )
    -
    - return value
        * If T* is already in increasing order, return *false*, otherwise return *true*
    - parameters
        * An array contains the elements of type T
        * Length of the array
* *const T* &nbsp;&nbsp;bubbleSortAndFindXthBiggest &nbsp;( **T***, **const size_t**, **const unsigned int _X_** )
    -
    - return value
        * The element which is the _X_ th biggest one in given array
    - parameters
        * An array contains the elements of type T
        * Length of the array
        * Unsigned int number _X_
    - purpose
        * If you want to find the median of a some large amount of data set eg. From an array has 10,000 elements</br>
this function executes only a half number of the comparison rather than comparing the entire

<br>
        
### Insertion sort
* *const bool* &nbsp;&nbsp;insertionSort &nbsp;( **T***, **const size_t** )
    -
    - return value
        * If T* is already in increasing order, return *false*, otherwise return *true*
    - parameters
        * An array contains the elements of type T
        * Length of the array
* *T** &nbsp;&nbsp;insert &nbsp;( **T***, **const size_t**, **const T _X_** )
    -
    - return value
        * Return sorted array T* that contains _X_ at the proper position
    - parameters
        * An array contains the elements of type T
        * Length of the array
        * The _X_ desire to insert
    - purpose
        * This function inserts parameter into sorted array in constant time keeping its order