/*
 ============================================================================
 Name        : UVA14_11172_RelationalOperator.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	int n1,n2, T;
	scanf("%d",&T);
	while(T--){
	scanf("%d %d",&n1,&n2);
	if (n1<n2){
		printf("<\n");
	}
	else if (n1>n2){
		printf(">\n");
	}
	else
		printf("=\n");
	}
}
