/*
 ============================================================================
 Name        : _10InAnArray_1-100ExactlyOneNumberIsDuplicateHowDoYouFindIt?.c
 Author      : AbdullahKhan
 Version     :00.1
 Copyright   : OpenSource
 Description : In an array 1-100 exactly one number is duplicate how do you find it?
 Compiler    : Eclipse CDT ( C/C++ Development Tools )
 Problem     : 10
 Reference   : javarevisited.blogspot.com/2011/06/top-programming-interview-questions.html
 Resource    :
 Date        : 24-01-17
 Path        :/Users/abdullah/Documents/workspace/_7HowToCheckIfTwoStringAreAnagram?/src
 ============================================================================
 */
#include <stdio.h>
int main() {
	int arr[5], temp;
	int i;
	int j ;
	arr[0]  = 6;
	arr[1] =  8;
	arr[2] =  2;
	arr[3] =  5;
	arr[4] =  8;
			///caution dont compare with first and last digit;
    for(i = 0; i<5 ; i++){
        for (j = 0; j<5 ; j++){
            if (arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }
    }
    printf("Sorted list in ascending order:\n");
    for (i= 0;i<5; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i = 0 ; i<4 ; i++) {
    				if (arr[i]== arr[i+1])
    				printf("arr i is : %d arr i+1 is : %d\t ", arr[i], arr[i+1]) ;
    	}
}


