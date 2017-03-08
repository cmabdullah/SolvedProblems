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
#include <stdlib.h>

int main(void) {

	int arr[1000], i,j,temp, k = 0, sum = 0, n, T;
	float  average, x,y, result;
	scanf("%d", &T);
	while(k<T){
	scanf("%d", &n);
	for (i = 0;i<n;i++){
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
	average = (float)sum/n;
	//insertion sort
	for(i=1;i<n;i++){
		temp = arr[i];
		j=i-1;
		while(temp<arr[j] && j>=0){
		arr[j+1] = arr[j];
		--j;
		}
		arr[j+1]=temp;
		}
	x = average-	arr[0];
	y = arr[n-1] - average;
	result  = (x*2)+(y*2);
	printf("%.0f",result);
	k++;
	}

}
