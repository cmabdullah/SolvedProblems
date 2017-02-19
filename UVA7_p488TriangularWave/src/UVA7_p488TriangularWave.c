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
	long long int f,i,j,t,Amplitude,Frequency,T;
	scanf("%lld",&T);
	for(t=1;t<=T;t++){
		scanf("%lld %lld",&Amplitude,&Frequency);
		for(f = 1;f<=Frequency;f++){
			for(i = 0;i<Amplitude;i++){
				for (j = 0;j<=i;j++){
					printf("%lld",i+1);
				}
				printf("\n");
			}
			for(i = Amplitude;i>1;i--){
				for(j = i-1;j>0;j--){
					printf("%lld",i-1);
				}
				printf("\n");
			}
			if(t!=T-1 || f!= Frequency-1)
			printf("\n");
		}

	}
	return 0;
}
