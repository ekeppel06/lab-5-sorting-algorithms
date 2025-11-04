/*
 * Asort.cpp
 * Insertion Sort
 *
 *  Created on: Nov 2, 2025
 *      Author: jeaton03
 */

#include "../myheaders.h"

// Your ASort function(s) goes here ..

void InsertSort(long a[], int size){
	for(int i=1; i<size; ++i){ //Iterates through all items of the array, i is the current item being sorted
		for(int j=0; j<i; ++j){ //Iterates up to the item being sorted i, and establishes j as the test item
			if(a[i]<a[j]) 	//Compares item i(sorted) with item j(test)
							//If item i is greater less than j, item i is slowly swapped back to item j
				for(int k=i; k>j; --k)
					swap(a[k],a[k-1]);
							//Else, it moves onto the next test value, until it hits the item being sorted

		}
	}
}

