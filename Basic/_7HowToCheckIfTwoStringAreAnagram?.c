/*
 ============================================================================
 Name        : _7HowToCheckIfTwoStringAreAnagram?.c
 Author      : AbdullahKhan
 Version     : 0.01
 Copyright   : OpenSource
 Description : How to check if two String are Anagram/permutation?, Hello World in C, Ansi-style
 Compiler    : Eclipse CDT ( C/C++ Development Tools )
 Problem     : 07
 Reference   : javarevisited.blogspot.com/2011/06/top-programming-interview-questions.html
 Resource    : http://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
 Date        : 22-01-17
 Path        :/Users/abdullah/Documents/workspace/_7HowToCheckIfTwoStringAreAnagram?/src
 ============================================================================
 */
// C program to print all permutations with duplicates allowed
#include <stdio.h>
#include <string.h>
void sname(char *f);
/* Function to swap values at two pointers */
void swap(char *x, char *y){
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void sname(char *f){
	char *x;


	// printf("%s", f);
}
/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */


void print(char *k){
	printf("%s\n", k);
}


void permute(char *a, int l, int r){
   int i;
   if (l == r)
     print(a);
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i)); //backtrack
       }
   }
}
/* Driver program to test above functions */
int main()
{
    char str[] = "ABC";

    char name[20];
    int n = strlen(str);
    scanf("%s",name);
    sname(name);
    permute(str, 0, n-1 );
    return 0;
}
