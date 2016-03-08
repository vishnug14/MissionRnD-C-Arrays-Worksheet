/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that returns the names and scores of top K students.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40) and K value is 2.
return top 2 students [ { "stud2", 30 }, { "stud3", 40 } ]

INPUTS: array of structures of type student, length of the array, integer K.

OUTPUT: Return top K students from array. Output need not be in decreasing order of scores.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/

#include <iostream>
#include <malloc.h>
#include<conio.h>

struct student {
	char *name;
	int score;
};
void sort_students(struct student *students, int n){
	int i, j, temp;
	for (i = 0; i < n; i++){
		for (j = i + 1; j < n; j++){
			if (students[i].score < students[j].score){
				temp = students[i].score;
				students[i].score = students[j].score;
				students[j].score = temp;
			}
		}
	}
}

struct student ** topKStudents(struct student *students, int len, int k) {
	int i;
	if (students!=NULL&&k>0&&len>0){
		if (k > len){
			k = len;
		}
		sort_students(students, len);
		struct student **result = (struct student **)malloc(sizeof(struct student)*k);
		for (i = 0; i<k ; i++){
				result[i] = &students[i];
			}
			return result;
		}
	else {
		return NULL;
	}
}
