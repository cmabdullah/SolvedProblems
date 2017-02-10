/*
 ============================================================================
 Name        : _6HowToCountOccurrenceOfAGivenCharacterInAString.c
 Author      : AbdullahKhan
 Version     : 0.01
 Copyright   : OpenSource
 Description : How to count occurrence of a given character in a String?,Hello World in C
 Compiler    : Eclipse CDT ( C/C++ Development Tools)
 Problem     : 06
 Reference   : javarevisited.blogspot.com/2011/06/top-programming-interview-questions.html
 Date        : 22-01-17
 Path        :/Users/abdullah/Documents/workspace/_6HowToCountOccurrenceOfAGivenCharacterInAString/src
 ============================================================================
 */
#include<stdio.h>
int main(){
    int i;
    char c, string[50] ;
    char d ;
    int count = 0;
    i = 0;
    printf("Input a String :");
    while((c = getchar()) != '\n'){
        string[i] = c;
        i++;
    }
    string[i] = '\0' ;
  //  printf("%s", string);
    d = getchar();
    for (i = 0 ; i !='\n'; i++){
    	if (d == string[i])
    		count++;
    }
    printf("%d", count);
}

