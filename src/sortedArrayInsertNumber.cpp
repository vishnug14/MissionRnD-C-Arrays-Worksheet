/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <stdlib.h>
int find_position(int *, int len, int num);
int * sortedArrayInsertNumber(int *arr, int len, int num){
	int pos,index=0,i,*arr_new,count=0;
	arr_new = (int*)malloc(sizeof(int));
	if ( arr!= NULL&&len>0){
		pos = find_position(arr, len, num);
		for (i = 0; i<len + 1; i++){
			arr_new = (int *)realloc(arr_new, sizeof(int)*(index+4));
			if (i == pos&&count!=1){
				arr_new[index] = num;
				index++;
				i--;
				count++;
				
			}
			else{
				arr_new[index] = arr[i];
				index++;
			}
		}
		return arr_new;
	}
	else {
		return NULL;
	}
}

int find_position(int *a, int n, int k){
	int i;
	if (a[0] > k){
		return 0;
	}
	else if (a[n - 1] < k){
		return n;
	}
	else{
		for (i = 0; i < n; i++){
			if (k>a[i] && k < a[i + 1])
				return i + 1;
		}
	}
}
