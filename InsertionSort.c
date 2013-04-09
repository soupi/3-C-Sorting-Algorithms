/*
 *  Created on: November 12, 2012
 *      Author: Gil Mizrahi
 */

// ------------------ Insersion sort -------------------
#include "InsertionSort.h"


// sorts array using intersion sort algorithm
// gets: array, length of array, compare function and swap function
void Insertionsort(void *array, int length, 
		int Compare(void*, int, int), void Swap(void *, int, int))
{
	int i, j; // loop indexes
	
	for (j = 1; j < length; j++) // index to insert array
		for (i = j-1; 0 <= i; i--)
		{
			// compare to previous index and swap if needed
			if (!Compare(array, i, i+1))
				Swap(array, i, i+1);
			// if previous index is smaller, this is my place
			else i = 0; 
		}
}
