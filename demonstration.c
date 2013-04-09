/*
 *  Created on: November 12, 2012
 *      Author: Gil Mizrahi
 */

// demostrates Mergesort, quicksort and insertion sort.

#include <stdio.h>
#include "MergeSort.h"
#include "QuickSort.h"
#include "InsertionSort.h"
#include "gen_int.h"

#define ARRAY_SIZE 20
#define LIMIT 100

int main()
{
    int array[3][ARRAY_SIZE];

    int i,j; // indexes
    
    srand(time(NULL)); // start rand
    
    printf("This program demonstrates the use of Merge sort, Quick sort and Insertion sort.\n\n");
    // create random array
    for (i = 0; i < ARRAY_SIZE; i++)
        array[0][i] = array[1][i] = array[2][i] = rand() % LIMIT;

    
    printf("Random array:\n");
    for (i = 0; i < ARRAY_SIZE; i++) // printf random array
        printf("%d ", array[0][i]);
    
    // sort
    Mergesort(array[0], ARRAY_SIZE, IntSize, IntCompare2, IntAssign);
    Quicksort(array[1], ARRAY_SIZE, IntCompare, IntSwap);
    Insertionsort(array[2], ARRAY_SIZE, IntCompare, IntSwap);
    
    printf("\n\nSorted array after Merge sort, Quick sort and Insertion sort:\n");
    for (i = 0; i < 3; i++)
    {
        switch (i) // print algorithm name
        {
         case 0:
               printf("M: ");
               break;
         case 1:
              printf("Q: ");
              break;
         case 2:
              printf("I: ");
              break;
         }
         
        for (j = 0; j < ARRAY_SIZE; j++) // print sorted array
            printf("%d ", array[i][j]);
    
        printf("\n");
    }
    
    getch();
    
    return 0;
}
