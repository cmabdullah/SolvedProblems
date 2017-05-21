/*
 ============================================================================
 Name        : Uva29_11799HorrorDash.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	int i,j=1,hi,n,arr[100],T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		hi = arr[0];
		for (i=0;i<n-1;i++){
			if (hi<arr[i+1]){
				hi=arr[i+1];
			}
		}
		printf("Case %d: %d\n", j, hi);
		j++;
	}
	return 0;
}
