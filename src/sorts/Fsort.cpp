/*
 * Fsort.cpp
 *
 *  Created on: Nov 13, 2025
 *      Author: fbrzozow
 */

#include "../myheaders.h"

// Your FSort function(s) goes here ..

int cutbyparts(long a[], int first, int last) {
    long pivot = a[(first + last) / 2]; // Takes middle and makes it a pivot
    int i = first, j = last; // setting i to the first in the partition, and j to last

    while (1) {
        while (a[i] < pivot){
        	i++; // skips over if i is less than the pivot
        };
        while (a[j] > pivot) {
        	j--;  // Stops, then swaps with the pivot since it is bigger
        }

        // failsafe
        if (i >= j){
            return j;
        }

        //auto-swaps a[i], and a[j] because of while loops above
        swap(a[i], a[j]);
        i++;
        j--;
        }

}

void quickSort(long a[], int first, int last) {
    if (first >= last){
        return; // returns if array is size 1 ; doesn't need to be partitioned
    }
    // Once quickSort is called in main code, it then goes through the partitioning code
    int pivot = cutbyparts(a, first, last); // Makes a pivot
    quickSort(a, first, pivot); // Quicksorts the left of the pivot
    quickSort(a, pivot + 1, last); //Quicksorts the right of the pivot
}



