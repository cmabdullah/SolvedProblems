/*
 ============================================================================
 Name        : UVA11_11364Parking
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void){
	int val,min,max,n,T;
	scanf("%d",&T);
	while(T--){
	scanf("%d",&n);
	min=100;
	max=0;
	while(n--){
		scanf("%d",&val);
		if(val>max){
			max = val;
		}
		if(val<min){
			min=val;
		}
	}
	printf("%d\n",2*(max-min));
	}
}
