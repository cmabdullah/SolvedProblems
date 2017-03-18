/*
 ============================================================================
 Name        : UVA18_12289OneTwoThree.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
int main(void) {
	char name[6];
	int x, T;
	scanf("%d",&T);
	while(T--){
		scanf("%s",name);
		x = strlen(name);
		if(x==5){
			printf("3\n");
		}
		else if ((name[0]=='o'&&name[1]=='n' )||(name[0]=='o'&&name[2]=='e') ||(name[1]=='n' &&name[2]=='e')){
			printf("1\n");
		}
		else{
			printf("2\n");
		}
	}
	return 0;
}
