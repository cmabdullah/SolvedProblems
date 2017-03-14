/*
 ============================================================================
 Name        : UVA13_11044SearchingForNessy.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m,n, T, s;
	scanf("%d",&T);
	while(T--){
	scanf("%d %d",&n, &m);
	s =  ((m/3)*(n/3));
	printf("%d\n", s);
	}
}
