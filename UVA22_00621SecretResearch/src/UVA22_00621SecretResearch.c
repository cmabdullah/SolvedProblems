/*
 ============================================================================
 Name        : UVA22_00621SecretResearch.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 Reference	 : Competitive Programming 3, page 20.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	int l, T;
	char ar[1000];
	scanf("%d", &T);
	while (T--){
		scanf("%s", ar);
		l = strlen(ar);
		if (ar[l - 1] == '5' && ar[l - 2] == '3'){
		printf("-\n");
		}
		else if (strcmp(ar, "1") == 0 || strcmp(ar, "4") == 0|| strcmp(ar, "74")== 0){
		printf("+\n");
		}
		else 	if (ar[0] == '1' && ar[1] == '9'&& ar[2] == '0'){
		printf("?\n");
		}
		else if (ar[0] == '9' && ar[l-1] == '4'){
		printf("*\n");
		}
		else{
		printf("+\n");
		}
	}
	return 0;
}
