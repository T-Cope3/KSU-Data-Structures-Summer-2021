//Troy Cope
//3305 Summer Section W01
//Prof. Shi
//7/23/21
//Used: https://www.youtube.com/watch?v=PgBzjlCcFvc: to understand the concept better
//Solved mostly on pen and paper again

// FILE: quick.cxx
// An interactive test program for the quicksort function

#include <algorithm>  // Provides swap
#include <cstdlib>    // Provides EXIT_SUCCESS, size_t
#include <iostream>   // Provides cout and cin
using namespace std;

// PROTOTYPES of the functions used in this test program:
void quicksort(int data[ ], size_t n);
// Precondition: data is an array with at least n components.
// Postcondition: The elements of data have been rearranged so
// that data[0] <= data[1] <= ... <= data[n-1].

void partition(int data[ ], size_t n, size_t& pivot_index);
// Precondition: n > 1, and data is an array (or subarray)
// with at least n elements.
// Postcondition: The function has selected some "pivot value"
// that occurs in data[0]..data[n-1]. The elements of data
// have then been rearranged, and the pivot index set so that:
//   -- data[pivot_index] is equal to the pivot;
//   -- Each item before data[pivot_index] is <= the pivot;
//   -- Each item after data[pivot_index] is >= the pivot.


int main( )
{
    const char BLANK = ' ';
    const size_t ARRAY_SIZE = 10;  // Number of elements in the array to be sorted
    int data[ARRAY_SIZE];          // Array of integers to be sorted
    int user_input;                // Number typed by the user
    size_t number_of_elements;     // How much of the array is used
    size_t i;                      // Array index

    // Provide some instructions
    cout << "Please type up to " << ARRAY_SIZE << " positive integers.";
    cout << "Indicate the list's end with a zero." << endl;

    // Read the input numbers
    number_of_elements = 0;
    cin >> user_input;
    while ((user_input != 0) && (number_of_elements < ARRAY_SIZE))
    {
        data[number_of_elements] = user_input;
        number_of_elements++;
        cin >> user_input;
    }

    // Sort the numbers and print the result with two blanks after each number
    quicksort(data, number_of_elements);
    cout << "In sorted order, your numbers are: " << endl;
    for (i = 0; i < number_of_elements; i++)
        cout << data[i] << BLANK << BLANK;
    cout << endl;

    return EXIT_SUCCESS;
}

void quicksort(int data[ ], size_t n)
// Library facilities used: cstdlib
{
    size_t pivot_index; // Array index for the pivot element
    size_t n1;          // Number of elements before the pivot element
    size_t n2;          // Number of elements after the pivot element

    if (n > 1)
    {
        // Partition the array, and set the pivot index.
        partition(data, n, pivot_index);

        // Compute the sizes of the subarrays.
        n1 = pivot_index;
        n2 = n - n1 - 1;
        
        // Recursive calls will now sort the subarrays.
        quicksort(data, n1);
        quicksort((data + pivot_index + 1), n2);
    }
}

void partition(int data[ ], size_t n, size_t& pivot_index)
// Library facilities used: itemtool.h, stdlib.h
//
// NOTES FROM THE IMPLEMENTOR:
// How the partition works on small arrays:
//
// Notice that n=0 is not permitted by the precondition.
//
// If n=1, then too_big_index is initialized as 1, and too_small_index is
// initialized as 0. Therefore, the body of the loop is never executed,
// and after the loop pivot_index is set to zero.
//
// If n=2, then both too_big_index and too_small_index are initialized as 1.
// The loop is entered, and there are two cases to consider:
// -- if data[1] <= pivot, then too_big_index increases to 2, and
//    too_small_index stays at 1. The if-statement at the bottom of the loop
//    is then skipped, and after the loop we copy data[1] down to data[0],
//    and copy the pivot into data[0]. Thus, the smaller element is in
//    data[0], and the larger element (the pivot) is in data[1].
// -- if data[1] > pivot, then too_big_index stays at 1, and too_small_index
//    decreases to 0. The if-statement at the bottom of the loop is then
//    skipped, and after the loop we end up copying the pivot onto data[0]
//    (leaving data[1] alone). Thus, the smaller element (the pivot) remains
//    at data[0], leaving the larger element at data[1].
{   
    //using the given parameters and variable names
    int pivot = data[0];
    size_t too_big_index = 1;
    size_t too_small_index = n-1;
      
    //to my knowledge this is how you do a quick sort normally
    //I basically just did it the same way I would in java
    while(too_big_index <= too_small_index)
    {
        //incrementing end indexes as needed
        while(too_big_index < n && data[too_big_index] <= pivot)
            too_big_index++;
            
        while(data[too_small_index] > pivot)
            too_small_index--;
            
        //to actually move the values in array
        //they need to be swapped
        if(too_big_index < too_small_index)
        {
            //direct changing of the values
            int tmp = data[too_big_index];
            data[too_big_index] = data[too_small_index];
            data[too_small_index] = tmp;
        }
    }
    
    //in order to match the video i would print the too_big_index and too_small_index here.
    //i thought it was unnecessary and made things cluttered
    
    //this slides the piviot index for the next run through
    pivot_index = too_small_index;

    //assigning/corresponding data
    data[0] = data[pivot_index];
    data[pivot_index] = pivot;
}
