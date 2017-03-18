/*
 ============================================================================
 Name        : UVA17_12279EmoogleBalance.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	int n,val,j = 0;
	while(scanf("%d",&n)== 1){
    if (n==0)
    break;
	int tr=0,par = 0;
		 for(int i=0;i<n;i++){
	         scanf("%d",&val);
	         if (val==0){
	         tr++;
	         }
	         else{
	         par++;
		 	}
		 }
		j++;
	 printf("Case %d: %d\n",j,(par-tr));
	 
	}
	return 0;
}
