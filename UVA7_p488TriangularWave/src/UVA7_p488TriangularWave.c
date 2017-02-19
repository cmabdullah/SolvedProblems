/*
 ============================================================================
 Name        : UVA7_p488TriangularWave.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	long long int i , j ,n=1,t=1, k = 1, Amplitude , Frequency,T,ff;
	scanf("%lld",&T);
	printf("\n");
	for (i=1;i<=T;i++){
		scanf("%lld",&Amplitude);
		scanf("%lld",&Frequency);
		for(ff = 1;ff<=Frequency;ff++){
			for (i = 0;i<Amplitude;i++){
				for (j = 0;j<=i;j++){
					printf("%lld",i+1);
				}
		//		k++;
				printf("\n");
			}
		//	k = k-2;
//printf("");
			for (i = Amplitude;i>1;i--){
					for (j = i-1;j>0;j--){
						printf("%lld",i-1);
					}
			//		k--;
					printf("\n");
				}
	//		k = k+2;
		}
        if(t!=n-1 || ff!= Frequency-1)
            printf("\n");
	}
	return 0;
}
