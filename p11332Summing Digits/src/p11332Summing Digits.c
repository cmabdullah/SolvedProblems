/*
 ============================================================================
 Name        : p11332Summing.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n  ,st ;
	while((scanf("%d",&n)== 1)){
		if(n==0)
		break;
		st=0;
		while(1){
			while(n!=0){
			  st = st+(n%10);
			  n = n/10;
			}
				if (st/10 == 0){
				break;
			}
				else{
				n = st;
				st = 0;
			}
		}
		printf("%d\n",st);
	}
}
