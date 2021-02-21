# Sorting algorithms using templated C++
- Bubble sort
- Insertion sort
- Quick sort

## Specifications
### Bubble sort
* *const bool* &nbsp;&nbsp;bubbleSort &nbsp;( **T***, **const size_t** )
    -
    - return value
        * If given Array T* is already sorted return *false*, otherwise return *true*
    - parameters
        * An array contains any type specified as T
        * Length of the array
* *const T* &nbsp;&nbsp;bubbleSortAndFindnthBiggest &nbsp;( **T***, **const size_t**, **const unsigned int** )
    -
    - return value
        * [*unsigned int number passed as 3rd param*]th biggest element in T*
    - parameters
        * An array contains any type specified as T
        * Length of the array
        * Unsigned int number to specifies the [*this number*]th biggest element in T* array

<br>
        
### Insertion sort
* *const bool* &nbsp;&nbsp;insertionSort &nbsp;( **T***, **const size_t** )
    -
    - return value
        * If given Array T* is already sorted return *false*, otherwise return *true*
    - parameters
        * An array contains any type specified as T
        * Length of the array
* *T** &nbsp;&nbsp;insert &nbsp;( **T***, **const size_t**, **const t** )
    -
    - return value
        * Return Array T* that contains data T passed as third param at proper position
    - parameters
        * An array contains any type specified as T
        * Length of the array
        * Data T desired to be inserted
