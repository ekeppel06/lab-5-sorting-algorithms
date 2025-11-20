/*
 * Esort.cpp
 *
 *  Created on: Nov 13, 2025
 *      Author: ekeppel06
 */

#include "../myheaders.h"

// Your ESort function(s) goes here ..

void shellSort(long data[], int size){
	int increments[20], k, i, h; //Increments is size 20, maximum amount of subarrays is 20.
	for(h=1, i=0; h<size; i++){ //Divides array into subarrays increasing in length by a factor of 3
		increments[i]=h;
		h=3*h+1;
	}

	for(i--; i>=0; i--){ //i=number of increments/subarrays
		h=increments[i];
		for(int hCnt=h; hCnt<2*h; hCnt++){//Loops through selected subarray
			for(int j=hCnt; j<size;){
				long temp = data[j];
				k=j;
				while(k-h>=0 && temp<data[k-h]){
					data[k]=data[k-h];
					k-=h;
				}
				data[k]=temp;
				j+=h;
			}
		}
	}

}
