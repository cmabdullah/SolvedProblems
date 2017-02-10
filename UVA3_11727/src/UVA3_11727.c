/*
 ============================================================================
 Name        : UVA3_11727.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/***/
#include <stdio.h>
int main(void) {
	int i , T , a , b,c;
	scanf("%d", &T);
	for (i = 1; i<=T; i++){
		scanf("%d%d%d",&a,&b,&c);
		if( a>=1000&&a<10000 && 	b>=1000&&b<=10000 && c>=1000&&c<=10000){
					//Checking for a is middle number or not
		if( b>a && a>c || c>a && a>b ){
			printf("%d",a);
		}

			        //Checking for b is middle number or not
		if( a>b && b>c || c>b && b>a ){
			printf("%d",b);
		}

			        //Checking for c is middle number or not
		if( a>c && c>b || b>c && c>a ){
			printf("%d",c);
		}
	  }
		else
			printf("unsuccess");
	}
	return 0;
}
