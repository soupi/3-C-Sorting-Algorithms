/*
 *  Created on: November 12, 2012
 *      Author: Gil Mizrahi
 */

 // ------------------ Quick sort ----------------------
 
#include "QuickSort.h"

// sorts the array using quick sort algorithm
// gets: pointer to array, length of array, compare function, swap function
void Quicksort(void *array, int length,
		int Compare(void*, int, int), void Swap(void *, int, int))
{
	int low = 0;
	int high = length-1;
	quicksort(array, low, high, Compare, Swap);
}


// sorts the array using quick sort algorithm
// gets: pointer to array, low index, high index, 
// compare function, swap function
void quicksort(void *array, int low, int high,
		int Compare(void*, int, int), void Swap(void *, int, int))
{
	if (low >= high) // stop condition
		return;
	//set pivot location
	int pivot = place_pivot(array, low, high, Compare, Swap); 

	quicksort(array, low, pivot-1, Compare, Swap); // sort bottom half
	quicksort(array, pivot+1, high, Compare, Swap); // sort top half
}

// moves all the objects smaller than low to it's left
// and all the objects bigger than low to it's right
// gets: array, low, high, compare function, swap function
int place_pivot(void *array, int low, int high, 
		int Compare(void*, int, int), void Swap(void *, int, int))
{
	int pivot = low; // set pivot
	int switch_i;
	int i;
	for (switch_i = low+1, i = low+1; i <= high; i++) // run on array
	{
		if (Compare(array, i, pivot)) // compare pivot and i
		{
			Swap(array, i, switch_i); // swap i and i to switch
			Swap(array, pivot, switch_i); // swap pivot and i to switch
			pivot++; // set current location of pivot
			switch_i++; // set location for i to switch with pivot
		}
	}
	return pivot; // return pivot location
}
