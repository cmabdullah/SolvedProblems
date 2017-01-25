/*
 ============================================================================
 Name        : _9InAnArray_1-100NumbersAreStored,OneNumberIsMissingHowDoYouFindIt?.c
 Author      : AbdullahKhan
 Version     :0.01
 Copyright   : OpenSource
 Description : In an array 1-100 numbers are stored, one number is missing how do you find it?,Hello World in C, Ansi-style
 Compiler    : Eclipse CDT ( C/C++ Development Tools )
 Problem     : 09
 Reference   : javarevisited.blogspot.com/2011/06/top-programming-interview-questions.html
 Resource    :
 Date        : 24-01-17
 Path        :/Users/abdullah/Documents/workspace/_7HowToCheckIfTwoStringAreAnagram?/src

 ============================================================================
 */
#include <stdio.h>
int main() {
	int arr[5];
	int i;
	//arr[0]  = 5;
	arr[1] = 7;
	//arr[2] = 9;
	 arr[3] = 9;
	arr[4] = 20;///why unable to read last value?
	for(i = 0 ; i<5 ; i++) {
			if (arr[i] == 0)
				printf("\n missing file in position :  %d\n", i);
		//	 printf("%d ", arr[i]) ;
	}
}
