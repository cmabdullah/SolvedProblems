/*
 ============================================================================
 Name        : UVA24_10300_EcologicalPremium.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//The number of animals is not needed.
//Simply sum all the multiplications of the farmyard in square meters by the
//environment-friendliness and we're done.
#include <stdio.h>
int main(void) {
	int i,a,b,c,T,Ca,ans;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&Ca);
		ans = 0;
		for(i = 0;i<Ca;i++){

			scanf("%d%d%d",&a,&b,&c);
			ans = ans +(a*c);
		}
		printf("%d\n", ans);
	}
}
