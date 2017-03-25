/*
 ============================================================================
 Name        : UVA19_12403SaveSetu.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include<string.h>
int main(void){
	int K, T,amount= 0;
	scanf("%d",&T);
	while(T--){
	char string_A[9] = "donate";
	char string_B[9];
	int x;
	scanf("%s", string_B);
	x = strcmp(string_A,string_B);
	if (0 == x){
	scanf("%d", &K);
	amount = amount+K;
	}
	else
	printf("report %d\n",amount);
	}
}


