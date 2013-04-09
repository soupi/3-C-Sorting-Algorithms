/*
 *  Created on: November 12, 2012
 *      Author: Gil Mizrahi
 */

// --------------- Generic Int Functions ----------------
#ifndef _GEN_INT
#define _GEN_INT

// Swaps indexes i and j's values in array
void IntSwap(void* array, int i, int j);
// compare 2 cells in array
int IntCompare(void* array, int i, int j);

// compare a cell in 1 array to a cell in another array
int IntCompare2(void* array1, void* array2, int i, int j);

// assign value from one array to another
void IntAssign(void* array1, void* array2, int i, int j);

// returns sizeof(int)
int IntSize(void);

#endif
