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
	int i , j , k = 1, Amplitude , Frequency,T,ff;
	scanf("%d",&T);
	printf("\n");
	for (i=1;i<=T;i++){
		scanf("%d",&Amplitude);
		scanf("%d",&Frequency);
		for(ff = 1;ff<=Frequency;ff++){
			for (i = 0;i<Amplitude;i++){
				for (j = 0;j<=i;j++){
					printf("%d",k);
				}
				k++;
				printf("\n");
			}
			k = k-2;
			printf("");
			for (i = 0;i<Amplitude;i++){
					for (j = i;j<(Amplitude-1);j++){
						printf("%d", k);
					}
					k--;
					printf("\n");
				}
			k = k+2;
		}
	}
}
