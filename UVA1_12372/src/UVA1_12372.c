/*
 ============================================================================
 Name        : UVA1_12372.c
 Author      : AbdullahKhan
 Version     :12372
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	int i , T , a , b,c;
	scanf("%d", &T);
	for (i = 1; i<=T; i++){
		scanf("%d%d%d",&a,&b,&c);
		if(a <= 20 && b <= 20 && c<=20)
		printf("Case %d: good\n",i );
		else
		printf("Case %d: bad\n",i );
	}
}
