/*
 ============================================================================
 Name        : test.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main(){
	int garr[2] = {2,1} ;
	int arr2[5]= {3,4,6, 2, 8};
	int i,j, length = 4, miss = 0;
	//i = 0;
	for(i  = 0; i<4 ; i++){
		for (j = 0; j< 1; j++){
			if (arr2[i]== garr[j]){
				miss = 1;
								break ;
			}
			else
							j++;
		}
		if (miss == 0)
					printf("%d ", arr2[i]);
	}

}
