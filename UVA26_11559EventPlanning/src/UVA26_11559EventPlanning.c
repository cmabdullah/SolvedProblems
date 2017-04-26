/*
 ============================================================================
 Name        : UVA26_11559EventPlanning.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main(){
	int i,j,k,participants,budget,hotels,weeks,cost,amount,room;
	while (scanf( "%d%d%d%d",&participants,&budget,&hotels,&weeks) == 4){
		cost = 9000000;
		for (i = 0;i<hotels;i++){
			scanf("%d",&amount);
			for(j = 0;j<weeks;j++){
				scanf("%d",&room);
				k = 0;
				if (room>participants){
					k = amount*participants;
					if (cost>k){
						cost = k;
					}
				}
			}
		}
		if (cost>budget){
			printf("Stay home\n");
		}
		else{
			printf("%d\n", cost);
		}
	}
	return 0;
}
