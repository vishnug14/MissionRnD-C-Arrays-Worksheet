/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>
int test_input(int*, int);
int removeArrayDuplicates(int *arr, int len){
	int i, j, k, exchange,x;
	x= test_input(arr, len);
	if (x == 1){
		for (i = 0; i < len; i++){
			for (j = i + 1; j < len;){
				if (arr[i] == arr[j]){
					exchange = j;
					for (k = j + 1; k < len; k++, exchange++){
						arr[exchange] = arr[k];
					}
					len--;
				}
				else
					j++;
			}
		}
		return len;
	}
	else{
		return -1;
	}
}
int test_input(int *a, int n){
	if (n > 0 && a != NULL){
		return 1;
	}
	else
		return 2;
}