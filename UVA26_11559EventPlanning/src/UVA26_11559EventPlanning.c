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
int long N, B, H, W;
int long p, a;
int main() {
    while(scanf("%d %d %d %d", &N, &B, &H, &W) == 4) {
        long cost = 0;
        for(int i = 0; i < H; i++) {
            scanf("%d", &p);
            for(int j = 0; j < W; j++) {
                scanf("%d", &a);
                if(a >= N && N * p <= B)
                    if(cost == 0 || N * p < cost)
                        cost = N * p;
            }
        }
        printf(cost == 0? "stay home\n" : "%d\n", cost);
    }
}





















/**
 *
 *#include<math.h>

int main(){
	long i,j,k,participants,budget,hotels,weeks,cost,amount,room;
	while (scanf( "%ld%ld%ld%ld",&participants,&budget,&hotels,&weeks)== 4){
		cost = budget+1;
		for (i = 0;i<hotels;i++){
			scanf("%ld",&amount);
			for(j = 0;j<weeks;j++){
				scanf("%ld",&room);
				k = 0;
				if (room>=participants){
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
			printf("%ld\n", cost);
		}
	}
	return 0;
}
**/
