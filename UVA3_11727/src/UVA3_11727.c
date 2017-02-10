/*
 ============================================================================
 Name        : UVA 11727.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/***/
#include <stdio.h>
int main(void) {
	int a,b,c,i,T,result;
	scanf("%d",&T);
		if (T<20){
		for (i=1;i<=T;i++){
			scanf("%d%d%d",&a,&b,&c);
			if(a>=1000 && a<10000){
				if(b>=1000 && b<10000){
					if(c>=1000&&c<10000){
						if((b>a&&a>c)||(c>a&&a>b)){
						result=a;
							}
						if((a>b&&b>c)||(c>b&&b>a)){
							result=b;
						}
						if((a>c&&c>b)||(b>c&&c>a)){
							result = c;
						}
					}
				}
			}
			printf("Case %d: %d\n",i,result);
		}
	}
	return 0;
}

