/*
 ============================================================================
 Name        : TOCAssignment3.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define EOS '\0'
char input[MAX],stack[MAX];
int i= 0,j,k = 0,flag,sl,il;
void push();
void pop();
void display();
int main(void) {
	puts("Enter an string : ");
	scanf("%s", &input);//q1
	//printf("Input string is : %s\n", input);
	il = strlen(input);
	//printf("Input string length is : %d\n", il);  abc#cba
	push();
	display();
	//printf("stack length is : %d\n", sl);
}
void push(){//q2
	while ( i<MAX ){
		if (input[i]=='#'){
			flag = i;
			pop();
			break;
		}
		stack[i]=input[i];
		i++;
	}
}
void pop(){//q3
	sl = strlen(stack);
	j = flag+1;
	while ( j< il){
		if (stack[sl-1] != input[j])
			break;//q4
		stack[sl-1]= '\0';
		sl--;
		j++;
	}
}
void display(){
	(stack[0]== EOS) ? printf("Accept\n") : printf("reject \n") ;
}
