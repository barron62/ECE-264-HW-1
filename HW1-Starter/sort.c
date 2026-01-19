/* MODIFY this file */

#include "sort.h"

void ssort(int * arr, int size) {
	/* For step 3, fill this in to perform a selection sort
	   For step 4, add conditional compilation flags to perform an ascending selection sort instead */
	

	//int min = arr[0];
	int max_index = 0;
	int temp;
	for (int j = 1; j < size; j++){
		max_index = j-1;
		for (int i=j; i < size; i++){
			#ifdef ASCENDING 
				if (arr[i] < arr[max_index]) {
					max_index = i;
				}
			#else
				if (arr[i] > arr[max_index]) {
					max_index = i;
				}
			#endif
		}
		temp = arr[j-1];
		arr[j-1] = arr[max_index];
		arr[max_index] = temp;
		 
	}
}
