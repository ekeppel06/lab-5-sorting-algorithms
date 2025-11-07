/*
* Csort.cpp
*
*  Created on: Nov 5, 2025
*      Author: fbrzozow
*/
#include "../myheaders.h"

// Your CSort function(s) goes here ..
// 6, 76, 42, 10, 555, 30, 12, 0, -1, 4
void SelectionSort(long a[], int size){
	for(int i = 0, least; i < size; i++){
		least = i;
		for(int j = 1; j < i; j++){
			swap(a[j-1], a[least-1]);

		}
	}
}
