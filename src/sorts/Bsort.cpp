/*
 * Bsort.cpp
 *
 *  Created on: Nov 2, 2025
 *      Author: jeaton03
 */

#include "../myheaders.h"

// Your BSort function(s) goes here ..

void bubbleSort(long a[], int size){
	for(int i=0; i<size-1; i++){
		for(int n=size-1; n>i; --n){
			if(a[n]<a[n-1]){
				swap(a[n],a[n-1]);
			}
		}
	}
}

