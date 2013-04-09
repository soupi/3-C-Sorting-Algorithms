/*
 *  Created on: November 12, 2012
 *      Author: Gil Mizrahi
 */

 // ------------------ Quick sort ----------------------
 
#ifndef _QUICK_SORT
#define _QUICK_SORT

// calling function for Quick Sort algorithm.
// sorts array using quick sort.
// gets: array, array length, compare function and swap function.
void Quicksort(void *array, int length,
		int Compare(void*, int, int), void Swap(void *, int, int));

// sorts array using quick sort.
// gets: array, low and high indexes, compare function and swap function.
void quicksort(void *array, int low, int high,
		int Compare(void*, int, int), void Swap(void *, int, int));

// places pivot for quick sort.
// gets: array, low and high indexes, compare function and swap function.
int place_pivot(void *array, int low, int high, 
		int Compare(void*, int, int), void Swap(void *, int, int));

#endif
