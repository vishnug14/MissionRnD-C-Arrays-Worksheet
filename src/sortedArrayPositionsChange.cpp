/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>
void swap( int*, int*);
void * sortedArrayPositionsChange(int *arr, int len){
	int i,temp,count=0,temp1;
	if (arr != 0 && len > 0){
		for (i = len-1; i>=0; i--){
			if (arr[i]<arr[i - 1]){
				if (count == 1)
					temp1 = temp;
				temp = i;
				count++;
				if (count == 2){
					swap(&arr[temp-1], &arr[temp1]);
					break;
				}
			}
		}
	}
	else
	return NULL;
}
void swap( int *i, int *j){
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}