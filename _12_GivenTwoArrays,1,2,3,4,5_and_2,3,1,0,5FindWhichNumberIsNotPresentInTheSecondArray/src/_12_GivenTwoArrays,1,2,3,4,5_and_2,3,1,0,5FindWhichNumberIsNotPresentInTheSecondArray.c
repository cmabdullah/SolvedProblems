/*
 ============================================================================
 Name        : _12_GivenTwoArrays,1,2,3,4,5_and_2,3,1,0,5FindWhichNumberIsNotPresentInTheSecondArray.c
 Author      : AbdullahKhan
 Version     : 0.01
 Copyright   : OpenSource
 Description : 12) Given two arrays, 1,2,3,4,5 and 2,3,1,0,5 find which number is not present in the second array.
 Compiler    : Eclipse CDT ( C/C++ Development Tools )
 Problem     : 12
 Reference   : javarevisited.blogspot.com/2011/06/top-programming-interview-questions.html
 Resource    :
 Date        : 26-01-17
 Path        :/Users/abdullah/Documents/SolvedProblems/_12_GivenTwoArrays,1,2,3,4,5_and_2,3,1,0,5FindWhichNumberIsNotPresentInTheSecondArray/src
 ============================================================================
 */

#include<stdio.h>
int main(){
    int i,j , arr1[100] , arr2[100] ,arr3[100],k, l, n, temp1, temp2;
    for (i = 0; i<5; i++){
        scanf("%d", &arr1[i]);
    }
        for (i = 0; i<5; i++){
        scanf("%d", &arr2[i]);
    }
    ///2 1 4 3 5
   /// 1 2 4 5 6
///arr1 sort
    for (i = 1; i<5; i++){
        temp1 = arr1[i];
        j = i-1;
            while(temp1<arr1[j] && j>=0){
               arr1[j+1] =  arr1[j];
               --j;
            }
            arr1[j+1] = temp1 ;
    }
///arr2 sort
    for (i = 1; i<5; i++){
        temp2 = arr2[i];
        j = i-1;
            while(temp2<arr2[j] && j>=0){
               arr2[j+1] =  arr2[j];
               --j;
            }
            arr2[j+1] = temp2 ;
    }
///print arr1
    for (i = 0; i<5; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
///print arr2
    for (i = 0; i<5; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");
    printf("\n");
    printf("\n");
    /// test section
    for (i= 0; i<5 ; i++){/// 1  2  3  4  5
            for (j = 0 ;j<5 ; j++){
                    if(arr1[i] == arr2[j])

                    printf("%d ", arr2[j]);
            }
            printf("\n");
    }
///print arr3
//printf("\n");
//printf("arr3 is  :");
//    for (i = 0; i<5; i++){
//        printf("%d ", arr2[i]);
//    }
}
