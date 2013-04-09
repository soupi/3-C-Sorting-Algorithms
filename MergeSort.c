/*
 *  Created on: November 12, 2012
 *      Author: Gil Mizrahi
 */

// ------------------ Merge sort ----------------------
#include <stdlib.h> // for malloc() and free()
#include "MergeSort.h"

// sorts array using Merge Sort algorithm
// gets: array, array length, value size (for dynamic allocation), 
// compare and assign functions.
void Mergesort(void* array, int length, int Size(void),
		int Compare(void*, void*, int, int), 
		void Assign(void*, void*, int, int))
{
	void* bottom_half; // of the array
	void* top_half; // of the array
	
	// stop condition: array is the length of 1
	if (length == 1)
		return;
	
	// allocate memory for bottom half and top half
	bottom_half = malloc(length/2 * Size());
	top_half = malloc((length/2 + length%2) * Size());
	
	// check allocations
	if (!bottom_half || !top_half)
	{
		perror("Could not allocate memory");
		exit(EXIT_FAILURE); // exit
	}
	
	// copy arrays
	CopyArray(bottom_half, array, length/2, 0, Assign);
	CopyArray(top_half, array, (length/2 + length%2), length/2, Assign);
	
	// sort each half
	Mergesort(bottom_half, length/2, Size, Compare, Assign);
	Mergesort(top_half, (length/2 + length%2), Size, Compare, Assign);
	
	// merge them
	Merge(array, bottom_half, top_half, length, Compare, Assign);
		
	// free allocated memory
	free(bottom_half);
	free(top_half);
}

// copy array to another array.
// gets: array1, array2 to be copied, length to copy, 
// index from where to start and assign function.
void CopyArray(void* array1, void* array2, int length, int index, 
		void Assign(void*, void*, int i, int j))
{
	int i;
	for (i = 0; i < length; i++)
		Assign(array1, array2, i, index+i);
}

// merges two arrays into one.
// gets: array, two half of the array to merge, array length and compare and assign functions.
void Merge(void *array, void* bottom_half, void* top_half, int length,
	  int Compare(void*, void*, int, int), void Assign(void*, void*, int, int))
{
	int i; // index for primary array
	int bottom_i = 0, top_i = 0; // indexes for the two halfs
	
	for (i = 0; i < length; i++) // for each cell in the primary array
	{
		// compare minimal values in arrays
		if (top_i == (length/2 + length%2) || ((bottom_i < length/2) && 
			Compare(bottom_half, top_half, bottom_i, top_i)))
		{
			// if bottom_i is smaller
			Assign(array, bottom_half, i, bottom_i);
			bottom_i++; // "erase from bottom array"
		}
		else
		{
			// if top_i is smaller
			Assign(array, top_half, i, top_i);
			top_i++; // "erase from top array"
		}
		
	}
}
