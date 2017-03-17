/*
 ============================================================================
 Name        : UVA16_11547AutomaticAnswer.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void){
	int a,b, n, T,i;
	while(scanf("%d",&T)==1){
		for(i=0;i<T;i++){
		scanf("%d",&n);
		a=((((((n*567)/9)+7492)*235)/47)-498);
		b=a/10;
		b=b%10;
		if(b<0)
		b=b/(-1);
		printf("%d\n",b);
		}
	}
	return 0;
}
