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
	int K, i,amount= 0;

		for (i = 1;i!= 0;i++){
			if (i == 10)
				break;

		char H[100] = "Hajj";
		char U[100];
		scanf("%s", U);
		if (strcmp(U,H) != 0){
			printf("Case %d: Hajj-e-Asghar\n",i);
		}
		else{
		printf("Case %d: Hajj-e-Akbar\n",i);
		}
		}
		return 0;
}
