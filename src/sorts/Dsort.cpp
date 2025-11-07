/*
 * Dsort.cpp
 * Mergesort
 *
 *  Created on: Nov 2, 2025
 *      Author: jeaton03
 */

#include "../myheaders.h"

// Your DSort function(s) goes here ..

void merge(long data[], int left_size, int right_size, int start_point){
	int i1 = 0, i2 =0; //i1 and i2 are the left and right side's relative index value respectively
	int i_temp = 0; //index value for temp array
	long* temp_array = new long[left_size+right_size]; //dynamic temp array which is a concatanation of the two arrays in size

	while((i1 <left_size) && (i2<right_size)) { //While both i1 and i2 have contents:
		if(data[i1+start_point]<data[i2+start_point+left_size]){ //if the content of the left side at the index value is less than right side at its index value
			*(temp_array + i_temp++) = data[(i1++)+start_point]; //add the content of left side at index value(++) to temp array

		}
		else{													//if right side greater
			*(temp_array + i_temp++) = data[(i2++)+start_point+left_size]; //add the content of right side at index value(++) to temp array
		}
	}
	//At this point, temp array has ordered values, but either i1 or i2 (but not both) has no more values

	if((i1 >= left_size)) //If left ran out of values, add all remaining of right
		while((i2<right_size))
			*(temp_array + i_temp++) = data[(i2++)+start_point+left_size];
	else if((i2>=right_size)) //If right ran out of values, add all remaining of left
		while((i1<left_size))
			*(temp_array + i_temp++) = data[(i1++)+start_point];
	//At this point, temp array is an entirely sorted concatonation of left side and right side

	for(int i=0; i<right_size + left_size; ++i ){ //Copy temp array into the original array
		data[start_point+i] = *(temp_array+i);
	}

	delete[] temp_array;
	return;
}


void mergeSort(long data[], int size, int start_point) { //Splits the arrays in half until it only has one element, then merges them together
	int left_size = ((size/2)+(size%2)); //left side is size/2 if size is even, and (size/2)+1 if size is odd
	int right_size = (size/2);			//right side is always size/2
	if(size != 1){		//Will only split the array if it has more than one element
		mergeSort(data, left_size , start_point); //Recursive call to split array for left side
		mergeSort(data, right_size , start_point + left_size); //Recursive call to split array for right side
	}
	merge(data, left_size, right_size, start_point); //Merges arrays back together with above merge function
	return;
}
