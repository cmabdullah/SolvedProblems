/*
 ============================================================================
 Name        : UVA4_p10370.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main(){
	int i , T,j,arr[100], n, count, sum;
	float x   , avg;

	while(scanf("%d",&T)==1){
		for (j=1;j<=T;j++){
			sum = 0;
			avg = 0;
			count = 0;
		scanf("%d",&n);
		for (i = 0; i<n ;i++){
			scanf("%d",&arr[i]);
			sum = sum + arr[i];

		}

		avg = sum/n;
		for (i = 0; i<n ;i++){
			if (arr[i]>avg)
				count++;
		}
		x = (100*(float)count) /(float)n;
		printf("%.3f%%\n",x);
		}
	}
	return 0;
}
