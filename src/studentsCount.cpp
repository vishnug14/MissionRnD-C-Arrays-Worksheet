
/*
OVERVIEW:  Write a function that takes ascending sorted student's score array and tells how many number of students got more marks and how many students got less marks than the given student.
E.g.: Input array: [10, 20, 30, 40, 50], score: 30, lessCount value is 2 (10, 20 are less than 30), moreCount value is 2 (40, 50 are greater than 30).

INPUTS: Ascending sorted student marks array, length of the array, one student score, lessCount and moreCount are to be
used to store final results.

OUTPUT: Update lessCount and moreCount with number of students less than and more than given score.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/

#include <stdio.h>
int test_case(int*, int);
void * studentsCount(int *arr, int len, int score, int *lessCount, int *moreCount) {
	int i,count=0,count1=0,x;
	x= test_case(arr, len);
	if (x == 1){
		for (i = 0; i < len; i++){
			if (score <= arr[i]){
				if (score < arr[i]){
					*moreCount = len - (count);
					break;
				}
				else if (score == arr[i] && score != arr[i + 1]){
					*moreCount = len - (count + count1 + 1);
					break;
				}
				else if (score == arr[i]){
					count1++;
					*moreCount = len - (count1);
				}
			}
			else{
				count++;
			}
		}
		*lessCount = count;
	}
	else if(x==2){
		return NULL;
	}
}
int test_case(int *arr, int n){
	int i;
	if (n > 0 && arr != NULL){
		return 1;
	}
	else{
		return 2;
	}
}