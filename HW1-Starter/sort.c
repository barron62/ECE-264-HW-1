/* MODIFY this file */

#include "sort.h"

void ssort(int * arr, int size) {
	/* For step 3, fill this in to perform a selection sort
	   For step 4, add conditional compilation flags to perform an ascending selection sort instead */
	int min = arr[0];
	int min_index = 0;
	int temp;
	for (int j = 1; j < size; j++){
		min_index = j-1;
		for (int i=j; i < size; i++){
			if (arr[i] < arr[min_index]) {
				min_index = i;
			}
		}
		temp = arr[j-1];
		arr[j-1] = arr[min_index];
		arr[min_index = temp];
		 
	}
}
