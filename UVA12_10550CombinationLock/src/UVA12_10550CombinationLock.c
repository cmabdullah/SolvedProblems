/*
 ============================================================================
 Name        : UVA12_10550CombinationLock.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c,i, x,y,z;

	while (scanf("%d %d %d %d",&i,&a,&b,&c)==4){
//	scanf("%d%d%d%d",&i,&a,&b,&c);
		 if (!i && !a && !b && !c)
			 break;
	if (a>i ){
		x = (40-a)+i;
	}
	else{
		x = i-a;
	}
	if (b<a ){
			y = (40-a)+b;
		}
		else{
			y = b-a;
		}
	if (c>b ){
			z = (40-c)+b;
		}
		else{
			z = b-c;
		}
	printf("%d\n",(360*3) + (x+y+z)*9 );
	}
}
