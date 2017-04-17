/*
 ============================================================================
 Problem 	 :
 Name        : Problem3.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
int arr[100];
	int n, sum = 0, i, val;
	float avg;
	printf("Enter n : ");
	    scanf("%d", &n);
	for (i = 0;i<n ;i++){
		scanf("%d", &val);
		arr[i] = val;
		sum = sum+arr[i];
	}
	for (i = 0;i<n ;i++){
		printf("%d ", arr[i]);
	}
	printf("\nSum : %d ", sum);
	avg = sum/n;
	printf("\nAverage : %f ", avg);
}
