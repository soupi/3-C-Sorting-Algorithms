/*
 *  Created on: November 12, 2012
 *      Author: Gil Mizrahi
 */

// ------------------ Merge sort ----------------------

#ifndef _MERGE_SORT
#define _MERGE_SORT

// sorts array using Merge Sort algorithm
// gets: array, array length, value size (for dynamic allocation), compare and assign functions.
void Mergesort(void* array, int length, int Size(void),
		int Compare(void*, void*, int, int), 
		void Assign(void*, void*, int, int));

// copy array to another array.
// gets: array1, array2 to be copied, length to copy, index from where to start and assign function.
void CopyArray(void* array1, void* array2, int length, int index, 
		void Assign(void*, void*, int i, int j));

// merges two arrays into one.
// gets: array, two half of the array to merge, array length 
// and compare and assign functions.
void Merge(void *array, void* bottom_half, void* top_half, int length,
	  int Compare(void*, void*, int, int), 
		void Assign(void*, void*, int, int));

#endif
