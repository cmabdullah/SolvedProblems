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
	char string_A[100] = "donate";
	char string_B[100];
	scanf("%s", string_B);
	if (strcmp(string_B,string_A) == 0){
	scanf("%d", &K);
	amount=amount+K;
	}
	else
	printf("%d\n",amount);
	}
	return 0;
}


