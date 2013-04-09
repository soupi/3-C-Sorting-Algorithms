/*
 *  Created on: November 12, 2012
 *      Author: Gil Mizrahi
 */

// --------------- Generic Int Functions ----------------
#include "gen_int.h"

// Swaps indexes i and j's values in array
void IntSwap(void* array, int i, int j)
{
	int temp = ((int*)array)[i];
	((int*)array)[i] = ((int*)array)[j];
	((int*)array)[j] = temp;
}
// compare 2 cells in array
int IntCompare(void* array, int i, int j)
{
	return (((int*)array)[i] <= ((int*)array)[j]);
}
// compare a cell in 1 array to a cell in another array
int IntCompare2(void* array1, void* array2, int i, int j)
{
	return (((int*)array1)[i] <= ((int*)array2)[j]);
}
// assign value from one array to another
void IntAssign(void* array1, void* array2, int i, int j)
{
	((int*)array1)[i] = ((int*)array2)[j];
}

// returns sizeof(int)
int IntSize(void)
{
	return sizeof(int);
}
