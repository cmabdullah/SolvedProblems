/*
 ============================================================================
 Name        : Uva28_11764JumpingMario.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void){
	int arr[100];
	int i, j = 1, high, lo , n, T;
scanf("%d", &T);
while(T--){
	scanf("%d",&n);
	for (i = 0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	high = 0, lo = 0;
	for (i = 0; i< n-1; i++){
		//printf("%d ", arr[i]);
		if (arr[i]< arr[i+1]){
			high++;
		}
		//printf("loop %d arr = %d  arr+1 = %d high = %d \n",i,arr[i],arr[i+1], high);
		if (arr[i]>arr[i+1])
			lo++;
	}
	printf("Case %d: %d %d\n", j, high, lo);
	j++;
	}
}
