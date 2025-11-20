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
	for(int i = 1, j, least; i < size ; i++){
		for(j = 0, least = i; j < i; j++){
			// a[j] is first
			if(a[least] < a[j]){
				least = j;
				swap(a[least], a[i]);
			}
		}
	}
}


