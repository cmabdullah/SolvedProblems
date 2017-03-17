/*
 ============================================================================
 Name        : UVA15_11498DivisionOfNlogonia.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	int K,N,M ,X,Y;
	while(scanf("%d",&K)==1){
		if (K==0)
			break;
		scanf("%d %d",&N,&M);
		for(int i=0;i<K;i++){
			scanf("%d %d",&X,&Y);
			if(N==X || M ==Y){
				printf("divisa\n");
			}
			else if(N<X&&M<Y){
				printf("NE\n");
			}
			else if(N>X&&M<Y){
				printf("NO\n");
			}
			else if(N<X&&M>Y){
				printf("SE\n");
			}
			else if (X<N&&Y<M){
				printf("SO\n");
			}
			else
				printf("Wrong\n");
		}
	}
	return 0;
}
