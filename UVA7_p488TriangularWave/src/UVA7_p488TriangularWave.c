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
	long long int f,i,j,t,A,F,T;
	scanf("%lld",&T);
	for(t=1;t<=T;t++)
	{
		scanf("%lld %lld",&A,&F);
		for(f=1;f<=F;f++)
		{
			for(i=0;i<A;i++)
			{
				for (j=0;j<=i;j++)
				{
					printf("%lld",i+1);
				}
				printf("\n");
			}
			for(i=A;i>1;i--)
			{
				for(j=(i-1);j>0;j--)
				{
					printf("%lld",i-1);
				}
				printf("\n");
			}
			if(t!=(T-1)||f!=(F-1))
			printf("\n");
		}
	}
	return 0;
}
