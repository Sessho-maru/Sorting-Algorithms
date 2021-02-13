# Sorting algorithms using templated C++
- Bubble sort
- Insertion sort
- Quick sort

## Specifications
### Bubble sort
* *const bool* &nbsp;&nbsp;bubbleSort &nbsp;( **T***, **length** )
    -
    - return value
        * If given Array T* is already sorted return *false*, otherwise return *true*
    - parameters
        * An array contains any type specified as T
        * Length of the array
* *const bool* &nbsp;&nbsp;bubbleSortAndFindnthBiggest &nbsp;( **T***, **const size_t**, **const unsigned int** )
    -
    - return value
        * If given Array T* is already sorted return *false*, otherwise return *true*
    - parameters
        * An array contains any type specified as T
        * Length of the array
        * The **[NUMBER passed as 3rd param]th** biggest element in given array

<br>
        
### Insertion sort
* *const bool* &nbsp;&nbsp;insertionSort &nbsp;( **T***, **length** )
    -
    - return value
        * If given Array T* is already sorted return *false*, otherwise return *true*
    - parameters
        * An array contains any type specified as T
        * Length of the array
* *T** &nbsp;&nbsp;insert &nbsp;( **T***, **const size_t**, **const t** )
    -
    - return value
        * Return Array T* that contains given T at proper position
    - parameters
        * An array contains any type specified as T
        * Length of the array
        * T element desired to be inserted
