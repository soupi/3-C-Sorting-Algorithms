/*
 *  Created on: November 12, 2012
 *      Author: Gil Mizrahi
 */

// ------------------ Insertion sort -------------------
#ifndef _INSERTION_SORT
#define _INSERTION_SORT

// sorts array using insertion sort algorithm
// gets: array, length of array, compare function and swap function
void Insertionsort(void *array, int length, 
		int Compare(void*, int, int), void Swap(void *, int, int));

#endif
