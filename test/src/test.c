/*
 ============================================================================
 Name        : ArmstrongNumber.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Following program printing all Armstrong number except 153.but //why
// i can not fix it.needed help

#include<stdio.h>
int main(){
	int i, j, sum=0, n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<n;j++)
		{
			sum+=(i+j);
		}
	}
	printf("%d", sum);
}



