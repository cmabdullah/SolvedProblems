/*
 ============================================================================
 Name        : UVA20_12577HajjeAkbar.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int  i;
	char H[100] = "Hajj";
	char U[100];
	for (i = 1;i!=0;i++){
		scanf("%s", U);
		if (U[0] == '*')
		break;
		if(strcmp(U,H) != 0){
		printf("Case %d: Hajj-e-Asghar\n",i);
		}
		else{
		printf("Case %d: Hajj-e-Akbar\n",i);
		}
	}
	return 0;
}
